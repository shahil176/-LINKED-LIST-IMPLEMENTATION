# -LINKED-LIST-IMPLEMENTATION
*COMPANY*: CODTECH IT SOLUTIONS PVT.LTD
**NAME*: SHAHIL MURMU
*INTERN ID*: CT04DF2444
*DOMAIN*: C LANGUAGE
*DURATION*: 4 WEEKS
*MENTOR*: NEELA SANTOSH KUMAR
#Task 2 Description – Singly Linked List Implementation in C

In Task 2, the objective was to implement a singly linked list in the C programming language with support for three fundamental operations: insertion, deletion, and traversal. This task not only focuses on understanding dynamic data structures but also sharpens the skills required to manage memory manually using pointers — a crucial part of C programming and systems-level development.

A singly linked list is a linear data structure where each element, known as a node, contains two parts: data and a pointer to the next node. Unlike arrays, linked lists do not require contiguous memory allocation, making them efficient for dynamic memory use and frequent insertions/deletions. This makes linked lists ideal for implementing stacks, queues, symbol tables, and various other dynamic structures.

The program begins by defining a struct Node, which contains an integer data and a pointer next to the next node in the list. The use of struct allows for encapsulating both the value and the connection in a single entity, creating a chain of nodes connected via memory references.

The insert() function is responsible for adding a new node at the end of the list. It dynamically allocates memory for a new node using malloc(), assigns the user-provided value to it, and then adjusts the next pointer of the last node to point to this new node. If the list is initially empty, the new node becomes the head of the list. This approach ensures that the insertion is handled efficiently, even when the list grows dynamically during runtime.

The deleteNode() function handles the deletion of a node by value. It carefully traverses the list while keeping track of the previous node, finds the node with the target value, and then adjusts the next pointer of the previous node to bypass the node to be deleted. If the value exists at the head of the list, the head is updated to the next node. The memory occupied by the removed node is then freed using free() to prevent memory leaks — a critical practice in C.

The display() function is designed to traverse the list from the head node to the end, printing each node’s data value. This provides a visual representation of the list contents and confirms the result of insertions or deletions made by the user.

The program's control flow is maintained by the main() function, which uses an infinite loop and a menu-driven interface to accept user commands. Based on the choice entered, it calls the corresponding function to perform insertion, deletion, or display operations. The loop continues until the user selects the exit option. Input validation and safe user interaction are ensured by checking inputs and maintaining clean separation between logic and display.

This task is significant because it introduces interns and students to the concept of linked memory management. Unlike static arrays, linked lists operate purely on pointers and manual memory allocation, offering flexibility at the cost of complexity. By working directly with pointer manipulation, students gain hands-on experience with the types of challenges involved in building low-level data structures — including issues like pointer safety, null pointer dereferencing, and memory leaks.

Furthermore, this task provides a strong foundation for understanding more advanced data structures like doubly linked lists, circular linked lists, and even graph representations such as adjacency lists. It also builds confidence in writing modular C code, designing efficient algorithms, and developing robust menu-driven programs.

Overall, the Singly Linked List program developed in this task demonstrates a strong understanding of dynamic memory, modular design, and pointer-based data structure manipulation. This skill is vital for any aspiring systems programmer, software engineer, or backend developer working with performance-sensitive or hardware-near applications.
#OUTPUT: 
![Image](https://github.com/user-attachments/assets/88c174ba-b343-4e31-a403-caa940490c69)
