//This program implements some string functions without actually calling them. 
//The following string functions have been made:
// --> strlen
// --> strrev
// --> strcat
// --> strcmp
// --> strcpy   


#include <bits/stdc++.h>
using namespace std;

void clearScreen() {
    printf("\033[2J");  
    printf("\033[H");   
    fflush(stdout);     
}

void str_len(){
    string s;
    cout<<"Enter string: ";
    cin>>s;

    int size = 0;
    while(s[size] != '\0' ){
        size++;
    }
    cout<<endl;

    cout<<"SIZE: "<<size<<endl;
}

void str_rev(){
    string s;
    cout<<"Enter string: ";
    cin>>s;

    int i = 0, j = s.size()-1;

    while(i<j){
        swap(s[i],s[j]);
        ++i;
        --j;
    }
    cout<<endl;

    cout<<"REVERSED STRING: "<<s<<endl;
}

void str_cpy(){
    string s;
    cout<<"Enter string: ";
    cin>>s;

    cout<<endl;
    cout<<" String S is copied to C....."<<endl;
    string c = s;
    cout<<endl;

    cout<<"String S: "<<s<<"\t String C:"<<c<<endl;
}

void str_cat(){
    string s1,s2;
    cout<<"Enter String 1: ";
    cin>>s1;
    cout<<"Enter String 2: ";
    cin>>s2;


    cout<<endl;
    cout<<" String 1 and 2 are concatenated....."<<endl;
    s1 = s1 + s2;
    cout<<endl;

    cout<<"Concatenated String: "<<s1<<endl;
}

void str_cmp(){
    string s1,s2;
    cout<<"Enter String 1: ";
    cin>>s1;
    cout<<"Enter String 2: ";
    cin>>s2;


    cout<<endl;
    int i=0,j=0,res=0;
    while(s1[i] != '\0' || s2[j] != '\0'){
        if(s1[i]=='\0' || s1[i]<s2[j]){
            res = -1;
            break;
        } 
        if(s2[j]=='\0' || s1[i]>s2[j]){
            res = 1;
            break;
        }
        
        ++i; ++j;
    }
    cout<<endl;

    if(res==0)  cout<<"Both strings are EQUAL."<<endl;
    else if(res==1) cout<<s1<<" is GREATER than "<<s2<<endl;
    else    cout<<s1<<" is SMALLER than "<<s2<<endl;
}


void menu(){
    cout<<"....................................."<<endl;
    cout<<"MAIN MENU:"<<endl;
    cout<<"\t 1. STR_LEN()"<<endl;
    cout<<"\t 2. STR_REV()"<<endl;
    cout<<"\t 3. STR_CPY()"<<endl;
    cout<<"\t 4. STR_CAT()"<<endl;
    cout<<"\t 5. STR_CMP()"<<endl;
    cout<<"\t 6. EXIT"<<endl;
    cout<<"....................................."<<endl;
    cout<<"Enter a choice: ";
}

int main(){
    
    int choice; 

    while(choice!=6){
        
        menu();
        cin>>choice;
        clearScreen();
        switch(choice){
            case 1: 
                cout<<"STR_LEN"<<endl;
                cout<<"....................................."<<endl;
                str_len();
                break;
            case 2:
                cout<<"STR_REV"<<endl;
                cout<<"....................................."<<endl;
                str_rev();
                break;
            case 3:
                cout<<"STR_CPY"<<endl;
                cout<<"....................................."<<endl;
                str_cpy();
                break;
            case 4:
                cout<<"STR_CAT"<<endl;
                cout<<"....................................."<<endl;
                str_cat();
                break;
            case 5:
                cout<<"STR_CMP"<<endl;
                cout<<"....................................."<<endl;
                str_cmp();
                break;
            case 6:
                cout<<"PROGRAM TERMINATED"<<endl;
                exit(1);
                break;
            default:
                cout<<"INVALID CHOICE!!"<<endl;
                cout<<"Please enter a valid choice...."<<endl;
                break;
                
        }
    }
    

    return 1;
}