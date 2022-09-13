vector<int> maxMul(int arr[],int n)
{
  int sum=0;
  queue<int>q0,q1,q2;
  
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
    if(arr[i] % 3 == 1)
    {
      q1.push(arr[i]);
    }
    else if(arr[i] % 3 == 2)
    {
      q2.push(arr[i]);
    }
    else
    {
      q0.push(arr[i]);
    }
  }
  
  if(sum % 3 == 1)
  {
    if(q1.size())
    {
      q1.pop();
    }
    else
    {
      if(q2.size())
      {
        q2.pop();
      }
      else
      {
        return {};
      }
      if(q2.size())
      {
        q2.pop();
      }
      else
      {
        return {};
      }
    }
  }
  if(sum % 3 == 2)
  {
    if(q2.size())
    {
      q2.pop();
    }
    else
    {
      if(q1.size())
      {
        q1.pop();
      }
      else
      {
        return {};
      }
      if(q1.size())
      {
        q1.pop();
      }
      else
      {
        return {};
      }
    }
  }
  
  vector<int>ans;
  
  while(!q0.empty())
  {
    ans.push_back(q0.top());
    q0.pop();
  }
  while(!q1.empty())
  {
    ans.push_back(q0.top());
    q0.pop();
  }
  while(!q2.empty())
  {
    ans.push_back(q0.top());
    q0.pop();
  }
  
  sort(ans.begin(),ans.end(),greater<int>());
  
  return ans;
}
