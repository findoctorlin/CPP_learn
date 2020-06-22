#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main()
{
    char object1[10] = "rose";                             //一般的string，存在数组里
    cout<<object1 << " is beautiful."<<endl;
    cout<<&object1<<endl;

    const char* p_object2 = "Burger";                     //指针指向的一个const字符串
    cout<<p_object2 << " is delicious."<<endl;
    cout<<*p_object2<<endl;                               //因为p_object对应的是首个char的地址
    cout<<&p_object2<<endl;            

    string object3;
    cout<<"pls enter an object: ";
    cin>>object3;
    size_t len=strlen(object3.c_str());
    char *result_str=new char[len+1];/*一定不要忘记创建的字符串数组长度应该比字符个数多1，从而可以在最后加上'\0'*/
    strncpy(result_str,object3.c_str(),len+1);/*一定不要忘记在长度后面加1，这样可以保证把原字符串后面的'\0'复制过来*/
    cout<<result_str<<endl;  
    cout<<&result_str<<endl;
    delete [] result_str;                 
}