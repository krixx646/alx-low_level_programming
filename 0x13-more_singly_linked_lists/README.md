Linked List Project
This is a simple project that implements a linked list data structure in C. A linked list is a linear data structure where each element, known as a "node", contains data and a pointer to the next node in the list. This project provides basic functionalities for creating, inserting, deleting, and displaying elements in a linked list.

Features
The linked list project provides the following functionalities:

Create: Create an empty linked list with a NULL head pointer.
Insert: Insert a new node with data at the beginning, end, or at a specific position in the linked list.
Delete: Delete a node with a specific data value or at a specific position in the linked list.
Display: Display the elements in the linked list in their current order.
Usage
To use this linked list project, you can follow these steps:

Include the linked_list.h header file in your C program.
Initialize a linked list using the createList() function.
Use the various functions provided in the linked_list.h header file to perform desired operations on the linked list, such as insertAtBeginning(), insertAtEnd(), insertAtPosition(), deleteByKey(), deleteByPosition(), and displayList().
Compile and run your C program to see the results.
Example usage:

c
Copy code
#include "linked_list.h"

int main() {
  // Initialize an empty linked list
  LinkedList* list = createList();

  // Insert nodes with data
  insertAtBeginning(list, 10);
  insertAtEnd(list, 20);
  insertAtPosition(list, 30, 1);

  // Display the linked list
  printf("Linked List: ");
  displayList(list);

  // Delete a node by key
  deleteByKey(list, 20);

  // Display the updated linked list
  printf("Updated Linked List: ");
  displayList(list);

  // Delete a node by position
  deleteByPosition(list, 1);

  // Display the final linked list
  printf("Final Linked List: ");
  displayList(list);

  return 0;
}
Contributions
Contributions to this linked list project are welcome! If you find any bugs or have suggestions for improvements, please feel free to open an issue or submit a pull request.

License
This linked list project is released under the MIT License, which allows for free use, modification, and distribution of the code. However, please note that this project comes with no warranty or guarantee of any kind. Use it at your own risk.

