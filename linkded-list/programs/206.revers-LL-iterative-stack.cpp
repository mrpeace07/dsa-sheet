/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;

        while (current != nullptr) {
            next = current->next;  // Store the next node
            current->next = prev;  // Reverse the current node's pointer
            prev = current;        // Move pointers one position ahead
            current = next;
        }

        head = prev;  // Update head to the new starting node
        return head;
    }
};

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if (head == nullptr || head->next == nullptr)
//             return head; // Return if the list is empty or has only one node
        
//         stack<ListNode*> s;
//         ListNode* temp = head;
        
//         // Push all nodes onto the stack
//         while (temp != nullptr) {
//             s.push(temp);
//             temp = temp->next;
//         }
        
//         // Get the new head of the reversed list
//         ListNode* newHead = s.top();
//         temp = newHead;
//         s.pop();
        
//         // Reconstruct the reversed list
//         while (!s.empty()) {
//             temp->next = s.top();
//             s.pop();
//             temp = temp->next;
//         }
        
//         temp->next = nullptr; // Set the last node's next to nullptr
        
//         return newHead;
//     }
// };

