#include<stdio.h>
#include<iostream>
using namespace std;

void linear_search(int* arr, int size, int n){
    cout<<"\n...............................................................\n";
    for( int i = 0; i < size; ++i){
        if( arr[i] == n){
            cout<<"Element found at "<<i<<" index."<<endl;
            return ;
        }
    }
    cout<<"Element not found"<<endl;
    
}

int main(){
    cout<<"Enter no of terms:"<<endl;       //specifying number of terms
    int nt;
    cin>>nt;

    cout<<"Enter "<<nt<<" values:"<<endl;        //reading the values
    int a[25];
    for( int i = 0; i < nt; ++i){
        cin>>a[i];
    }

    cout<<"\n...............................................................\n";
    cout<<"Printing the series: "<<endl;        //printing the series
    for( int i = 0; i < nt; ++i){
        cout<<a[i]<<"  ";
    }

    cout<<"\n...............................................................\n";
    cout<<"Enter value to search: ";        //enter value to search
    int val;
    cin>>val;
    int* ptr = a;

    linear_search(ptr,nt,val);

    cout<<"\n...............................................................\n";

}

