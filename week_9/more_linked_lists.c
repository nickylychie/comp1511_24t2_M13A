// Nicole, 24T2 Week 9
// More complicated linked list functions

#include <stdio.h>

int list_evens(struct node *head1, struct node *head2);
struct node *list_ordered_insert(struct node *head, int data);
struct node *list_delete_smallest(struct node *head);
struct node *list_copy(struct node *head1);
struct node *list_append(struct node *head1, struct node *head2);
struct node *list_reverse(struct node *head);
struct node *list_find_intersection(struct node *head1, struct node *head2);
int list_count_occurrences(struct node *head, int data);

int main(void) {

  return 0;
}

// Given two linked lists:
//    return 0, if neither list contains even numbers.
//    return 1, if one list contains even numbers, but the other does not.
//    return -1, if both lists contain even numbers.
int list_evens(struct node *head1, struct node *head2) {
    // TODO
    return 0;
}

// Given a linked list that is ordered in acending order and a value to insert, 
// insert the value into the list that will allow the list to remain in 
// ascending order.
struct node *list_ordered_insert(struct node *head, int data) {
    // TODO
    return NULL;
}

// Given a linked list, remove the node with the smallest value from the linked 
// list and return the new head of the list.
struct node *list_delete_smallest(struct node *head) {
    // TODO
    return NULL;
}

// Given a linked list, make a copy of the list and free the old list and return 
// the new head of the list.
struct node *list_copy(struct node *head1) {
    // TODO
    return NULL;
}

// Given two linked lists, append list2 to list1.
struct node *list_append(struct node *head1, struct node *head2) {
    // TODO
    return NULL;
}

// Given a linked list, reverse the list and return the new head of the list.
struct node *list_reverse(struct node *head) {
    // TODO
    return NULL;
}

// Given two linked lists, return a new list that is constructed of nodes 
// containing any values that appear in both lists.
struct node *list_find_intersection(struct node *head1, struct node *head2) {
    // TODO
    return NULL;
}

// Given a linked list and a value, count the number of times that value appears
// in the linked list.
int list_count_occurrences(struct node *head, int data) {
    // TODO
    return 0;
}
