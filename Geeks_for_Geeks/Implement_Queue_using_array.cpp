/*
Implement a Queue using an Array. Queries in the Queue are of the following type:
(i) 1 x   (a query of this type means  pushing 'x' into the queue)
(ii) 2     (a query of this type means to pop element from queue and print the poped element)

Example:    Input: Q = 5, Queries = 1 2 1 3 2 1 4 2     
            Output: 2 3
            Explanation:    In the first test case for query 
                            1 2 the queue will be {2}
                            1 3 the queue will be {2 3}
                            2   poped element will be 2 the queue will be {3}
                            1 4 the queue will be {3 4}
                            2   poped element will be 3 

Expected Time Complexity: O(1) for both push() and pop().
Expected Auxiliary Space: O(1) for both push() and pop().

Constraints:
1 ≤ Q ≤ 105
0 ≤ x ≤ 105

The structure of the class is
class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};
*/

void MyQueue :: push(int x)
{
        if(rear<100004){
            arr[rear]=x;
            ++rear;
        }
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
       if (front==rear){
           return -1;
       }
       int data = arr[front];
       ++front;
       return data;
}