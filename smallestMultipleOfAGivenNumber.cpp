#include<bits/stdc++.h>
using namespace std;


int num(int n)
{
  queue<string>q;
  q.push("9");
  
  while(true)
  {
    string curr=q.front();
    q.pop();
    
    if(stoi(curr) % n == 0)
    {
      return stoi(curr);
    }
    
    curr.push_back('0');
    q.push(curr);
    curr.pop_back();
    
    curr.push_back('9');
    q.push(curr);
    curr.pop_back();
  }
}

int main(){

   int n;
   cin>>n;
   
   cout<<num(n)<<" ";
}
