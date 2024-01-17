#include <iostream>
#include <exception>

class bolob
{
    public :
        int a;
};

void    f()
{
    try
    {
        int* array = new int[999999999999999];
    }
    catch (int)
    {
        std::cout << "catch error in F()" << std::endl;
    }
}
int main ()
{
    // std::cout << "Abdelali"<<std::endl;
    // {
        // srand(time(0));
        // std::cout << rand() <<std::endl;
        double bob= RAND_MAX;
        std::cout << bob << std::endl;
    // }
    // std::string olla = "ollala";
    // int a;
    // try
    // {
    //     int b;
    //     a = 50;
    //     try
    //     {
    //         int C;
    //         b = 50;

    //     }
    //     catch(int)
    //         {

    //         }
    //     C= 8;
    //     throw std::runtime_error("Wa exeception Nadya Hadei");
    //     // f();
    //     // std::cout << olla.at(9) << std::endl;
    // }
    // catch(std::bad_alloc& e)
    // {
    //     std::cout << "\"Dyal allocation  \" : " << e.what()<<std::endl;
    // }
    //  catch(int)
    // {
    //     std::cout << "\"Second catche : Error Catched  \" : "<<std::endl;
    // }
    // catch (std::exception& ex)
    // {
    //     std::cout << ex.what() << std::endl;
    // }
    // std::cout << a;
    // std::cout << " LOOOOL "<<std::endl;
    return (0);
}