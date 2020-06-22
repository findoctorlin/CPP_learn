#include <iostream>
int main()
{
    using namespace std;
    int yuhan[5];
    int* lin = new int[5];
    cout <<"address of the first element is:"
         << yuhan<<endl;
    cout <<"address of the whole array is:"
         << &yuhan<<endl;
    cout <<"address of the lin is:"
         << lin<<endl;
    cout <<"address of the &lin is:"
         << &lin <<endl;
    lin = lin + 1;
    cout <<"address of the lin is:"
         << lin<<endl;
    cout <<"address of the &lin is:"
         << &lin<< endl;
    cout << "the size of yuhan is: "<< sizeof(yuhan)<< endl;
    cout << "the size of lin is: "<< sizeof(lin);

}