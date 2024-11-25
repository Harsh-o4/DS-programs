#include<stdio.h>
#include<iostream>
using namespace std;

void sort( int* arr, int size){
    //selection sort
    for( int i = 0; i < size; ++i){
        for( int k = i + 1; k < size; ++k){
            if( arr[k] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
        }
    }
}

int binary_search(int* arr, int low, int high, int n){
    cout<<"\n...............................................................\n";
    int mid;
    while( low <= high){
        
        mid = (low + high) / 2;
        if(arr[mid] == n)
            return mid;
        else if(arr[mid] > n)
            high = mid - 1;
        else
            low = mid + 1;
    }
    
    return -1;
    
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

    int* ptr = a;
    sort(ptr,nt);
    cout<<"\n...............................................................\n";
    cout<<"Printing SORTED series: "<<endl;        //printing sorted series
    for( int i = 0; i < nt; ++i){
        cout<<a[i]<<"  ";
    }

    cout<<"\n...............................................................\n";
    cout<<"Enter value to search: ";        //enter value to search
    int val;
    cin>>val;

    int index = binary_search(ptr, 0, nt, val);

    if( index == -1)
        cout<<"Element not found."<<endl;       //printing output
    else
        cout<<"Element found at "<<index<<" index."<<endl;
    
    cout<<"\n...............................................................\n";

}

