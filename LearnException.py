EXCEPTION :
    -> Syntax used (keywords Used) :
        *-try:- Mainly used to represent a block of code which might throw an exception.
        *-catch:- block of code inside this keyword will get executed when an exception is thrown.
        *-throw:- Mainly used to throw an exception.
PROPERTIES :
        *- throw 'a' : 
                 Implicit type conversion doesn’t happen for primitive types.
        this is not throw 97-> if we catche it using catche.
        *- if we throw 'a' and there is no good catch for it catch the programme fail :
                libc++abi.dylib: terminating with uncaught exception of type char
                [1]    81154 abort      ./a.out |>
    Note: A derived class exception should be caught before a base class exception.
When a function detect an exception it represent this as object 

dynamically surrounding try block : if in a function A we throw an object of Class B and inthe same 
function we Catch an object of Class LOL the thrown object can't be catched by the last batch but it will be catche'
-ed by a compatible one;
diff(Volatile type)
{

}

PROBLEM(faced in ex01)
{
    Issue with copy constructor that tell no initialiser !
    can't copy elems of type ' const it's logically claire.
}
