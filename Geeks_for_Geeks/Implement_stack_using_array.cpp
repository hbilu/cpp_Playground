/*
Write a program to implement a Stack using Array. 
Your task is to use the class as shown in the comments in the code editor 
and complete the functions push() and pop() to implement a stack. 

Example:    Input: push(2), push(3), pop(), push(4), pop()
            Output: 3, 4
            Explanation:    push(2)    the stack will be {2}
                            push(3)    the stack will be {2 3}
                            pop()      poped element will be 3, the stack will be {2}
                            push(4)    the stack will be {2 4}
                            pop()      poped element will be 4

Expected Time Complexity : O(1) for both push() and pop().
Expected Auixilliary Space : O(1) for both push() and pop().

Constraints:
1 <= Q <= 100
1 <= x <= 100

//Function to push an integer into the stack.

class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

void MyStack :: push(int x)
{
    if(top<1000){
        arr[++top]=x;
    }
}

int MyStack :: pop()
{
    int data = 0;
    if (top==-1){
        return -1;
    }
    else{
        return arr[top--];
    }
}