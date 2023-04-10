#include<iostream>
using namespace std;

void swap(int *n1, int *n2){
    int temp = *(n1);
    *(n1) = *(n2);
    *(n2) = temp;
}

int main(){
    int a[5] = {1,2,3,4,5};

    for(int i=0; i<4; i++){
        swap((&(a+i)),(&(a+i+1)));
    }

    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}