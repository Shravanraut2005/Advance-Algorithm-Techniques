//Implement a cpp code to implement all string functions

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[100]="Shravan";
    char str2[100]="Raut";

    // //1. String length
    // int length1 = str1.length();
    // cout<<"Length of str1: "<<length1<<endl;

    // int length2 = str2.length();
    // cout<<"Length of str2: "<<length2<<endl;


    // //2. String concatenation
    // string str3=str1+str2;
    // cout<<"Concatenated string: "<<str3<<endl;

    //3. String Reverse
    cout<<"Original String:\t"<<str2;
    char rev_str;
    rev_str=strrev(str2);
    cout<<rev_str;

return 0;

    

}