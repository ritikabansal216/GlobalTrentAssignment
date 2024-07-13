#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class LinkedList {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;

        while (current != nullptr) {
            next = current->next; // store the next node
            current->next = prev; // reverse the current node's pointer
            prev = current; // move the prev pointer one step forward
            current = next; // move the current pointer one step forward
        }

        return prev; // prev will be the new head of the reversed list
    }

    void printList(ListNode* head) {
        ListNode* current = head;
        while (current != nullptr) {
            std::cout << current->val << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    std::cout << "Original List:" << std::endl;
    list.printList(head);

    ListNode* reversedHead = list.reverseList(head);

    std::cout << "Reversed List:" << std::endl;
    list.printList(reversedHead);

    // Free the allocated memory
    ListNode* current = reversedHead;
    while (current != nullptr) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
