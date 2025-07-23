#include <iostream>
#include <stack>
using namespace std;

//stack 만들기 - 정수 배열
int myStack[10000];
int stackSize=0;

//5가지 명령 수행하기
// empty
int isEmpty(){
    if(stackSize==0)
        return 1;
    return 0;
}

//push
void push(int X){
    myStack[stackSize] = X;
    stackSize++;
}

//pop
int pop(){
    if(isEmpty())
        return -1;
    int x = myStack[stackSize-1];
    stackSize--;
    return x;
}

// size
int size(){
    return stackSize;
}

// top
int top(){
    if(isEmpty())
        return -1;
    return myStack[stackSize-1];

}

int main(){
    int num=0;
    cin >> num;
    for(int i=0; i<num; i++){
        string word;
        cin >> word;
        if(word=="push"){
            int x;
            cin >> x;
            push(x);
        }else if(word=="pop"){
            cout << pop() << endl;
        }else if(word=="size"){
            cout << size() << endl;
        }else if(word=="empty"){
            cout << isEmpty() << endl;
        }else if(word=="top"){
            cout << top() << endl;
        }else{
            cout << "제공되지 않는 명령어입니다." << endl;
        }
    }
    return 0;
}