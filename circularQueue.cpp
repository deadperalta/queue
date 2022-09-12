void push(int x)
{
  if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1)))
  {
    cout<<"Queue Full"<<endl;
  }
 
  if(front == -1 && rear == -1)
  {
    front=0;
    rear=0;
  }
  else if(rear == size-1 && front != 0)
  {
    rear=0;
  }
  else 
  {
    rear++;
  }
  
  arr[rear] = x;
}

int pop()
{
  if(front == -1)
  {
    return INT_MIN;
  }
  
  int data=arr[front];
  if(front == rear)
  {
    front = -1;
    rear=-1;
  }
  else if(front == size - 1)
  {
    front=0;
  }
  front++;
  return data;
}
