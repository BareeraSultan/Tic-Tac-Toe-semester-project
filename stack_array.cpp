#include<iostream>
using namespace std;
int size=10, stack[10], top=-1;
bool is_full(){
    return top==size-1;
}
bool empty(){
    return top==-1;
}
void push(int x){
   if(is_full()){
    cout<<"the stack is full:"<<endl;
   }
    else{
        top++;  // increment
        stack[top]=x;  // assign the value
    }
}
void pop(){
    if(empty()){
        cout<<"The stack is empty:"<<endl;
    }
    else{
        stack[top];
        top--;
    }
}
int peek(){
    return stack[top];
}
void reverse(){
    cout<<"the reverse of stack is:"<<endl;
    for(int i=0; i<=top; i++){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
void display(){
    cout<<"The elements are:"<<endl;
    for(int i=top; i>=0; i--){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
int main(){
int n, value;
cout<<"Enter the size:"<<endl;
cin>>n; 
for(int i=0; i<n; i++){
    cin>>value;
    push(value);
}
display();
reverse();
int y=peek();
cout<<"The top value is:"<<y<<endl;
pop();
pop();
display();
reverse();
return 0;
}