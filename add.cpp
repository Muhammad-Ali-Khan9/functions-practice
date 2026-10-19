#include <iostream>
using namespace std;

// Write the complete argumentFunction below. // The function should take two arguments a and b // The function should return a+b  // code here 
int add(int &a, int &b) 
{     int sum = a + b;         
    return sum; 
}  

int main() {     
    int x , y;          
    cout<<"Enter first number: "<<endl;   
    cin>>x;
    cout<<"Enter second number: "<<endl;
    cin>>y;
    int result = add(x, y);
    cout<<"Result: "<<result<<endl;
    return 0;
}

