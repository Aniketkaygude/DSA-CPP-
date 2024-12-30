class Solution {
  public:
    Node *inPlace(Node *root) {
        // Code here
        vector<int>nodes;
        Node*temp=root;
        while(temp){
            nodes.push_back(temp->data);
            temp=temp->next;
        }
        
        int s=0;
        int e=nodes.size()-1;
        bool dir=true;
        temp = root;
        while(s<=e){

            if(dir){
                temp->data = nodes[s++];
            }
            else{
                temp->data =nodes[e--];
            }
            dir=!dir;
            temp=temp->next;
        }
        return root;
    }
};