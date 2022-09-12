int siblings(Node* root,int x)
{
  queue<Node*>q;
  q.push(root);
  
  while(!q.empty())
  {
    int n=q.size();
    while(n--)
    {
      Node* curr=q.front();
      q.pop();
      
      for(auto it:curr->kids)
      {
        if(it->data == x)
        {
          return curr->kid.size()-1;
        }
        q.push(it);
      }
    }
  }
  return 0;
}
