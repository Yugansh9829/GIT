#include<iostream>
using namespace std;

class internshala
{
    int a;
    int b;
    
    public:
    int capsulation(int value1,int value2)
    {
        int c = value1 * value2;
        return c; 
    }
    int emulsification(int a ,int b)
    {
        int d = a * b;
    }
};

int main()
{
    internshala object1;
    cout << object1.capsulation(289,544);
}