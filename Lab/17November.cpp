/*Construction overloading:--
operator overloading:--
let's u redefined + == << [] and other built in operator means when applied to your own class- the operator symbols stays the same, but its behaviour is written by you
SYNTAX:- 
            type OperatorSymbol (parameter list){
                //  YOUR CUSTOM BEHAIOUR   
                 }
operator overloading means giving additional meaning to operator for user defined objects
it is compile time polymorphism or static polymorphism 
the keyword operator followed by the symbol form the fnction name - the compiler invokes it whenever that operator is used with the matching operand type
void operator ++(){//return_type keyword operator
//subscribed++;   //object
}

-----RULES FOR OPERATOR OVERLOADING---------
one operand must be a user defined
u can not invent new operator symbols
u can not change an operator
precedance and associativity can not be changed
some operators like (=, [], (). ->) must be non static members

--------------WHICH  OPERATORS CAN BE OVERLOADED----------------
--ARITHMATIC: + - * / %
 RELATIONAL: == != < > <= >=  
 LOGICAL:
 BITWISE:
 ASSIGNMENT: 
 INCREMENT/DECREMENT:
 SUBSCRIPT&CALL:
 MEMBER ACCESS: -> 
 STREAM: << >>(I/O)
 MEMORY: new delete
 -----------WHICH  OPERATORS CAN NOT BE OVERLOADED---------------
--SCOPE CALCULATION: :: 
MEMBER SELECTOR: . 
POINTER TO MEMBER: .* 
TERNARY CONDITION: ? : 
sizeof operator
typeid operator
*/