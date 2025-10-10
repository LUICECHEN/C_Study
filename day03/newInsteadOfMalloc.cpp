#include <iostream>
#include <malloc.h>

class TEST
{
private:
    int num1;
    int num2;
public:
    TEST()
    {
        num1 = 10;
        num2 = 20;
    }
    void Print()
    {
        std::cout << num1 << " " << num2 << std::endl;
    }
};

int main(void)
{
    // 用malloc()函数在堆区分配一块内存空间，然后用强制类型转换将该块内存空间
    // 解释为是一个TEST类对象，这不会调用TEST的默认构造函数
    TEST * pObj1 = (TEST *)malloc(sizeof(TEST));
    pObj1->Print();

    // 用new在堆区创建一个TEST类的对象，这会调用TEST类的默认构造函数
    TEST * pObj2 = new TEST;
    pObj2->Print();

    return 0;
}

    
