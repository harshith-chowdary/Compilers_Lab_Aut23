#ifndef _TRANSLATOR_H
#define _TRANSLATOR_H

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <functional>
#include <iomanip>
#include <string.h>
using namespace std;

class Expression;
class Statement;
class Array;
class SymbolType;
class Symbol;
class SymbolTable;
class Quad;

// Expression attributes
class Expression {
    public:
        Symbol *symbol;  // symbol of the expression
        enum typeEnum {NONBOOLEAN, BOOLEAN} type;  // type of the expression scoped enum
        list<int> trueList, falseList, nextList;  // lists of quad numbers for next, true and false jumps

        void toInt();  // converts the expression to an integer
        void toBool();  // converts the expression to boolean
};

// Statement attributes
class Statement {
    public:
        list<int> nextList;     // List of quads having dangling exits for this statement
};

// Array attributes
class Array {
    public:
        Symbol *temp;    // temporary used for computing the offset for the array reference
        enum typeEnum {OTHER, POINTER, ARRAY} type;    // Pointers, arrays and normal expressions are all stored using array attributes initially
        Symbol *symbol;  // pointer to the symbol table entry
        SymbolType *subArrayType;   // type of the sub-array generated by A
};

// Symbol type class
class SymbolType {
    public:
        enum typeEnum {VOID, CHAR, INT, FLOAT, POINTER, FUNCTION, ARRAY, BLOCK} type;  // type of the symbol, scoped enum for safe comparisons
        int width;   // width of the symbol
        SymbolType *arrayType;  // type of the array elements

        SymbolType(typeEnum, SymbolType * = NULL, int = 1);  // constructor
        int getSize();  // returns the size (width) of the symbol
        string toString(); // returns the string representation of the type
};

// Symbol class
class Symbol {
    public:
        string name;  // name of the symbol
        int size, offset; // size and offset of the symbol
        SymbolType *type;  // type of the symbol
        SymbolTable *nestedTable;  // pointer to the symbol table if it is a nested entry
        string initialValue;  // initial value of the symbol
        bool isFunction; // flag to indicate if the symbol represents a function or not. if it does represent a function the return type will be given by the type attribute

        Symbol(string, SymbolType::typeEnum = SymbolType::INT, string = "");  // constructor
        Symbol *update(SymbolType *);  // updates the symbol with the given type
        Symbol *convert(SymbolType::typeEnum);  // converts the symbol to the given type
};

// Symbol table class
class SymbolTable {
    public:
        string name;  // name of the symbol table
        map<string, Symbol> symbols;    // list of all symbols in this table, mapped by their names for fast access
        SymbolTable *parent;            // parent symbol table of this symbol table
        
        SymbolTable(string = "NULL", SymbolTable * = NULL); // constructor
        Symbol *lookup(string); // returns the symbol with the given name, adds new entry if not found
        void print();  // prints the symbol table
        void update(); // updates the symbol table
};

// Quad class
class Quad {
    public:
        string op, arg1, arg2, result;  // parameters of the quad

        Quad(string, string, string = "=", string = "");  // constructor
        Quad(string, int, string = "=", string = ""); // constructor
        void print();  // prints the quad
};

// Emit functions for generating quads
void emit(string, string, string = "", string = ""); 
void emit(string, string, int, string = "");  

// Backpatching functions
void backpatch(list<int>, int);  // backpatches the list of quads with the given address
list<int> makeList(int);  // makes a list with the given number
list<int> merge(list<int>, list<int>); // merges the two lists

// Other helper functions
int nextInstruction();  // returns the next instruction number
Symbol *gentemp(SymbolType::typeEnum, string = "");  // generates a new temporary symbol
void changeTable(SymbolTable *);  // changes the current symbol table to the given one

// Type checking and conversions
bool typeCheck(Symbol *&, Symbol *&);  // checks if the two symbols have the same type

// Utility functions
string toString(int);  // returns the string representation of the given integer
string toString(float);  // returns the string representation of the given float
string toString(char);  // returns the string representation of the given character

// Global variables
extern vector<Quad *> quadArray; // array of quads
extern SymbolTable *currentTable, *globalTable; // current and global symbol tables
extern Symbol *currentSymbol;  // current symbol
extern SymbolType::typeEnum currentType;  // current type
extern int tableCount, temporaryCount; // counters for symbol table and temporary symbols

extern int yyparse();

#endif
