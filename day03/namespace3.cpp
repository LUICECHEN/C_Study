#include <iostream>
using namespace std;
namespace A
{
    int a = 100;
    int fun()
    {
        cout<<"a = "<<a<<endl;
    }

    namespace B            //嵌套一个命名空间B
    {
        int a =20;
        int fun()
        {
             cout<<"a = "<<a<<endl;
        }

    }
}
using namespace A::B;

int main(int argc, char *argv[])
{
    cout<<a<<endl;
    fun();

    return 0;
}