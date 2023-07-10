#include<iostream>
using namespace std;

int main(){
    struct {
        int myNum;
        string myString;
    } myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "afzal";

    cout<<myStructure.myNum<<endl;
    cout<<myStructure.myString;
}