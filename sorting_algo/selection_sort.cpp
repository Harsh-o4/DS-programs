#include<stdio.h>
#include<iostream>
using namespace std;

//function to print the series
void print_series(int* a,int nt){
    cout<<"  ";
     for( int i = 0; i < nt; ++i){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}

void selection_sort( int* arr, int size){
    //selection sort
    cout<<"Sorting the series:"<<endl;
    cout<<endl;
    print_series(arr,size);
    for( int i = 0; i < size; ++i){
        for( int k = i + 1; k < size; ++k){
            if( arr[k] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
                print_series(arr,size); //printing series repeatedly to observe swaps
            }
        }
        cout<<endl;
    }
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
    
    int* ptr = a;
    selection_sort(ptr,nt);
    
    cout<<"\n...............................................................\n";
    cout<<"Printing SORTED series: "<<endl;        //printing sorted series
    for( int i = 0; i < nt; ++i){
        cout<<a[i]<<"  ";
    }

    cout<<"\n...............................................................\n";

}

