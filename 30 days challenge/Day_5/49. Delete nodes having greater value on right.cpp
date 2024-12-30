class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        
        if (!head || !head->next) return head;

        // Use a stack to maintain the nodes
        std::stack<Node*> st;

        // Traverse the list and use the stack to track valid nodes
        Node* current = head;
        while (current != nullptr) {
            // Remove elements from the stack that are less than current node's data
            while (!st.empty() && st.top()->data < current->data) {
                st.pop();
            }
            st.push(current);
            current = current->next;
        }

       
      
     Node* newHead = nullptr;
        Node* tail = nullptr;

        while (!st.empty()) {
            Node* temp = (st.top());
            st.pop();
            temp->next = nullptr;  // Disconnect the node from the original list

            if (!newHead) {
                newHead = temp;
                tail = temp;
            } else {
                temp->next = newHead;
                newHead = temp;
            }
        }

        return newHead;  
    }
    
};