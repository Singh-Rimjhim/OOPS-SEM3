/*polymorphism
-it means many forms , the ability of one function , operator or object to behave differntly in different envirnoment based on the context
there r two types- compile time --static , run time-dynamic
static -- ressolved by the compiler before the program  runs
it is achieved by function overloading and operator overloading
static polymorphism is faster - no run time lookup overhead
it is also called as ad-hoc polymorphism
run time polymorphism - dynamic --
resolved by the program is executing
it is achieved by virtual function and inheritance
slight overhead - mutable virtual table lookup for call
enables a base pointer called derieved behaviour 

Compile time in action
2 or more functions share a name , the compile picks 
one by atching the argument list the compile time

Class Calculator{
 public:
        int add(int a, int b){
        return a + b;
        }
        double add(double a, double b){
        return a + b;
        }
        int add(int a, int b, int c){
        return a+b+c;
        }
};*/

