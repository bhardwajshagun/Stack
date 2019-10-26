#include <stdio.h>
#include <stdlib.h>

#include "mystack.h"

//Create a stack, add an item to it, and remove that item
void unitTest1() {
	printf("unitTest1\n\n");
	stack_t* test1 = create_stack(MAX_DEPTH);
	printf("Stack capacity: %d\n", test1->capacity);
	printf("Attempting to push: %d\n", stack_enqueue(test1, 3));
	stack_print(test1);
	printf("Removing: %d\n", stack_dequeue(test1));
	stack_print(test1);
	free_stack(test1);
	printf("\n\n");
}

//Create a stack, add multiple items to it
void unitTest2() {
	printf("unitTest2\n\n");
	stack_t* test2 = create_stack(MAX_DEPTH);
	printf("Stack capacity: %d\n", test2->capacity);
	printf("Attempting to push: %d\n", stack_enqueue(test2, 10));
	stack_print(test2);
	printf("Attempting to push: %d\n", stack_enqueue(test2, 20));
	stack_print(test2);
	printf("Attempting to push: %d\n", stack_enqueue(test2, 30));
	stack_print(test2);
	printf("Attempting to push: %d\n", stack_enqueue(test2, 40));
	stack_print(test2);
	printf("Attempting to push: %d\n", stack_enqueue(test2, 50));
	stack_print(test2);
	printf("Attempting to push: %d\n", stack_enqueue(test2, 60));
	stack_print(test2);
	printf("Attempting to push: %d\n", stack_enqueue(test2, 70));
	stack_print(test2);
	printf("Attempting to push: %d\n", stack_enqueue(test2, 80));
	stack_print(test2);
	printf("Attempting to push: %d\n", stack_enqueue(test2, 90));
	stack_print(test2);
	printf("Attempting to push: %d\n", stack_enqueue(test2, 100));
	stack_print(test2);
	free_stack(test2);
	printf("\n\n");
}

//Attempt to add items beyond capacity
void unitTest3() {
	printf("unitTest3\n\n");
	stack_t* test3 = create_stack(10);
	printf("Stack capacity: %d\n", test3->capacity);
	printf("Attempting to push: %d\n", stack_enqueue(test3, 1));
	stack_print(test3);
	printf("Attempting to push: %d\n", stack_enqueue(test3, 2));
	stack_print(test3);
	printf("Attempting to push: %d\n", stack_enqueue(test3, 3));
	stack_print(test3);
	printf("Attempting to push: %d\n", stack_enqueue(test3, 4));
	stack_print(test3);
	printf("Attempting to push: %d\n", stack_enqueue(test3, 5));
	stack_print(test3);
	printf("Attempting to push: %d\n", stack_enqueue(test3, 6));
	stack_print(test3);
	printf("Attempting to push: %d\n", stack_enqueue(test3, 7));
	stack_print(test3);
	printf("Attempting to push: %d\n", stack_enqueue(test3, 8));
	stack_print(test3);
	printf("Attempting to push: %d\n", stack_enqueue(test3, 9));
	stack_print(test3);
	printf("Attempting to push: %d\n", stack_enqueue(test3, 10));
	stack_print(test3);
	printf("Attempting to push: 11\n");
	stack_enqueue(test3, 11);
	stack_print(test3);
	printf("Attempting to push: 12\n");
	stack_enqueue(test3, 12);
	stack_print(test3);
	free_stack(test3);
	printf("\n\n");
}

//Filling and emptying a stack
void unitTest4() {
	printf("unitTest4\n\n");
	stack_t* test4 = create_stack(5);
	printf("Stack capacity: %d\n", test4->capacity);
	printf("Attempting to push: %d\n", stack_enqueue(test4, 100));
	stack_print(test4);
	printf("Attempting to push: %d\n", stack_enqueue(test4, 200));
	stack_print(test4);
	printf("Attempting to push: %d\n", stack_enqueue(test4, 300));
	stack_print(test4);
	printf("Attempting to push: %d\n", stack_enqueue(test4, 400));
	stack_print(test4);
	printf("Attempting to push: %d\n", stack_enqueue(test4, 500));
	stack_print(test4);
	printf("Removing: %d\n", stack_dequeue(test4));
	stack_print(test4);
	printf("Removing: %d\n", stack_dequeue(test4));
	stack_print(test4);
	printf("Removing: %d\n", stack_dequeue(test4));
	stack_print(test4);
	printf("Removing: %d\n", stack_dequeue(test4));
	stack_print(test4);
	printf("Removing: %d\n", stack_dequeue(test4));
	stack_print(test4);
	free_stack(test4);
	printf("\n\n");
}

//Attempt to remove items from an empty stack
void unitTest5() {
	printf("unitTest5\n\n");
	stack_t* test5 = create_stack(MAX_DEPTH);
	printf("Stack capacity: %d\n", test5->capacity);
	printf("Attempt to remove an item\n");
	stack_dequeue(test5);
	stack_print(test5);
	free_stack(test5);
	printf("\n\n");
}

int main() {

	// List of Unit Tests to test data structure	
	unitTest1();
	unitTest2();
	unitTest3();
	unitTest4();
	unitTest5();

	return 0;

}
