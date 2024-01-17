// #include <iostream>

#include <iostream>
using namespace std;

class E {
public:
  const char* error;
  E(const char* arg) : error(arg) { };
};

class F : public E {
public:
  F(const char* arg) : E(arg) { };
};

void f() {
  try {
    cout << "In try block of f()" << endl;
    throw E("Class E exception");
  }
  catch (F& e) {
    cout << "In handler of f()";
    cout << e.error << endl;
  }
};

int main() {
    try
    {
  try {
    cout << "In main" << endl;
    f();}
  catch (F& e) {
    cout << "In handler of inside try main:  ";
    cout << e.error << endl;
  };
  cout << "Resume execution in main" << endl;
}
  catch (F& e) {
    cout << "In handler of main: VISITED ";
    cout << e.error << endl;
  }
std::cout << " BosBooos "<<std::endl;

return (0);
}


// int main (int ac, char **av)
// {
//     int a = atoi(av[1]);
// try
// {
//     std::cin >> a;
//     if (a < 1 || a > 150)
//         throw a;
//     std::cout << " From Try : " << a <<std::endl;
// }

// catch(...)
// {
//     std::cout << " Error Henaaaa"<< std::endl;
//         // e.~exception();
// }

// std::cout << a <<std::endl;
//     return (0);
// }


// C++ program to demonstate property 3: If an exception is
// thrown and not caught anywhere, the program terminates
// abnormally in exception handling.
 
// #include <iostream>
// using namespace std;
 
// int main()
// {
//     try {
//         throw 'a';
//     }
//     catch (int x) {
//         cout << "Caught ";
//     }
//     catch(char c)
//         {
//             cout << "Catched By char c" << endl;
//         }
//     return 0;
// }
