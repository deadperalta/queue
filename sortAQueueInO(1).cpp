int minIndex(queue<int>&q,int sorted)
{
  int minval=INT_MAX;
  int minInd;
  for(int i=0;i<q.size();i++)
  {
    int e=q.front();
    q.pop();
    
    if(i < sorted && e < minval)
    {
      minInd=i;
      minval=i;
    }
    q.push(e);
  }
  return minInd;
}
void insertMinToRear(queue<int>&q,int minInd)
{
  int curr;
  for(int i=0;i<q.size();i++)
  {
    int e=q.front();
    q.pop();
    
    if(i == minInd)
    {
      curr=e;
    }
    else
    {
      q.push(e);
    }
  }
  q.push(curr);
}
void sort(queue<int>&q)
{
  for(int i=0;i<q.size()-1;i++)
  {
    int minInd=minIndex(q,q.size()-i);
    insertMinToRear(q,minInd);
  }
}
