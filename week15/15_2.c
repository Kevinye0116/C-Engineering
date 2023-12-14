//
// Created by Kevin Ye on 12/14/2023.
// Copyright (c) KevinYe on 12/14/2023.

#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} NODE;

/******************************/
NODE *insert(NODE *head, int n)
/******************************/
{
  NODE *p, *p1 = head;
  if (n == 0) return head;
  while (p1 != NULL) {
    if (p1->data == n) return head;
    p1 = p1->next;
  }
  p1 = head;

  /******************************/
  p = (NODE *) malloc(sizeof(NODE));
  /******************************/

  if (p == NULL)exit(0);
  p->data = n;
  p->next = 0;
  if (!p1) head = p;
  else {
    if (p->data < 0) {
      p->next = head;
      head = p;
    } else {
      while (p1->next)
        p1 = p1->next;
      /******************************/
      p1->next = p;
      /******************************/
    }
  }
  return head;
}
void main() {
  NODE *head = NULL, *p;
  int i, num[10] = {3, -7, -10, 12, 3, -45, 12, -31, 0, 20};
  for (i = 0; i < 10; i++)
    /******************************/
    head = insert(head, num[i]);
  /******************************/
  p = head;
  while (p) {
    printf("%5d", p->data);
    p = p->next;
  }
}
