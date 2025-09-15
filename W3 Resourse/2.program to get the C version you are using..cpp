#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    // Check for C standard version
    #if __STDC_VERSION__ >=  201710L
        cout<<"We are using C18!\n"<<endl;
    #elif __STDC_VERSION__ >= 201112L
        cout<<"We are using C11!\n"<<endl;
    #elif __STDC_VERSION__ >= 199901L
        cout<<"We are using C99!\n"<<endl;
    #else
        cout<<"We are using C89/C90!\n"<<endl;
    #endif

    // Indicate successful execution
    return 0;
}

