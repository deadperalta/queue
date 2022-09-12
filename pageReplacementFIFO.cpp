int fifo(int arr[],int n,int cap)
{
  int pr=0;
  unordered_set<int>st;
  queue<int>q;
  
  for(int i=0;i<n;i++)
  {
    if(q.size() < cap)
    {
      if(st.find(arr[i]) == st.end())
      {
        q.push(arr[i]);
        st.insert(arr[i]);
        pr++;
      }
    }
    else
    {
      if(st.find(arr[i]) == st.end())
      {
        int val=q.front();
        q.pop();
        
        st.erase(val);
        
        q.push(arrr[i]);
        st.insert(arr[i]);
        pr++;
      }
    }
  }
  return pr;
}
