/* 
Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd 
*/

#include<iostream>
using namespace std;
int main()
{ 
    int a,b;
    int n=0;
    string arr[10]= {" ", "one", "two","three","four","five","six","seven","eight","nine"};
    
    cin>>a>>b;
    
    if ((a<=9)&&(b<=9)){ 
       for(n=a;n<=b;n++){
            cout << arr[n]<<endl; 
        } }
    else if ((a<=9)&&(b>9)){    
        for(n=a;n<=9;n++){
            cout<< arr[n]<<endl;
        }    
        for(n=10;n<=b;n++){    
            if (n%2==0){
                cout<<"even"<<endl;
            }
             else {
                 cout<<"odd"<<endl;
             }
         }
  }
    
    else {
        for(n=a;n<=b;n++){
            if (n%2==0){
                cout<<"even"<<endl;
            }
             else {
                 cout<<"odd"<<endl;
             }
        }
            
    }
    
    
    return 0;
}