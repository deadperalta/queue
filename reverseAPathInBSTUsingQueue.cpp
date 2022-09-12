void reversePath(Node* root,queue<int>&q,int key)
{
  if(root == NULL)
  {
    return;
  }
  
  if(root->data == key)
  {
    q.push(node->data);
    node->data=q.front();
    q.pop();
  }
  
  else if(root->data > key)
  {
    q.push(node->data);
    reversePath(root->left,q,key);
    node->data=q.front();
    q.pop();
  }
  else
  {
    q.push(node->data);
    reversePath(root->right,q,key);
    node->data=q.front();
    q.pop();
  }
}
