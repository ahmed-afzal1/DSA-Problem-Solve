#include<iostream>
#include <cstdlib>
using namespace std;

int main(){
    int x,y,z;
    x=20;
    y=11;
    z=13;

    int *p1,*p2,*p3;
    p1 = &x;
    p2 = &y;
    p3 = &z;

    // if(*p1>*p2 && *p1>*p3){
    //     cout<<"Greatest number of elements :"<<*p1<<endl;
    // }else if(*p2>*p3 && *p2>*p1){
    //     cout<<"Greatest number of elements :"<<*p2<<endl;
    // }else{
    //     cout<<"Greatest number of elements :"<<*p3<<endl;
    // }

    // int *ptr;
    // ptr = (int *)malloc(5*sizeof(int));

    // if(ptr == NULL){
    //     cout<<"Memory not allocated";
    // }else{
    //     cout<<"Memory allocated";
    // }

    string food = "Pizza";

    string* ptr = &food; 
    cout<<*ptr<<endl;
    *ptr = "Burgur";
    cout<<*ptr<<endl;
    cout<<food;
}