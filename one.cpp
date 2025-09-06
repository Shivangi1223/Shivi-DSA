// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     // cout<< "Value of n is: "<< n << endl;

//     if(n>0){
//         cout<<"A is positive"<<endl;
//     }else{
//         cout<<"A is negative"<<endl;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     // int n;
//     // cin>>n;

//     // cout<< "Value of n is: "<< n << endl;

//    int a , b;

//    a = cin.get(); //"Using cin.get(), we can also take whitespace characters like tab, enter, and space as input."

//    cout<<"value of a "<<a<<endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z') {
        cout << "Lowercase letter" << endl;
    }
    else if(ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase letter" << endl;
    }
    else if(ch >= '0' && ch <= '9') {
        cout << "Numeric digit" << endl;
    }
    else {
        cout << "Special character or symbol" << endl;
    }

    return 0;
}
