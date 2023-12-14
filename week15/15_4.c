//
// Created by Kevin Ye on 12/14/2023.
// Copyright (c) KevinYe on 12/14/2023.

#include <stdio.h>
#include <string.h>

typedef struct {
  long id;
  char name[10];
  char sex[2];
} PS;

int delete(PS *p1, int m, const PS *p2, int n) {
  int j, k = 0;

  for (int i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      if (p1[i].id == p2[j].id) {
        break;
      }
    }
    if (j == n) {  // Not found in p2
      p1[k++] = p1[i];
    }
  }
  return k;  // New size of p1
}

int merge(PS *p1, int m, const PS *p2, int n) {
  int i = 0, j = 0, k = 0;
  PS temp[m + n];

  while (i < m && j < n) {
    if (p1[i].id < p2[j].id) {
      temp[k++] = p1[i++];
    } else {
      temp[k++] = p2[j++];
    }
  }

  while (i < m) temp[k++] = p1[i++];
  while (j < n) temp[k++] = p2[j++];

  for (i = 0; i < k; i++) {
    p1[i] = temp[i];
  }
  return k;
}

void sort(PS *p, int n) {
  PS temp;

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (p[j].sex[0] > p[j + 1].sex[0] ||
          (p[j].sex[0] == p[j + 1].sex[0] && strcmp(p[j].name, p[j + 1].name) > 0)) {
        temp = p[j];
        p[j] = p[j + 1];
        p[j + 1] = temp;
      }
    }
  }
}

void display(PS *p, int n) {
  printf("ID\tName\tSex\n");
  for (int i = 0; i < n; i++) {
    printf("%ld\t%s\t%s\n", p[i].id, p[i].name, p[i].sex);
  }
}

int main() {
  PS a[] = {{101, "tom", "m"}, {103, "mary", "f"}, {104, "mark", "m"},
      {105, "julia", "f"}, {106, "sara", "f"}};
  PS b[] = {{102, "mark", "m"}, {104, "mark", "m"}};

  int size_a = sizeof(a) / sizeof(a[0]);
  int size_b = sizeof(b) / sizeof(b[0]);

  printf("a:\n");
  display(a, size_a);

  printf("\nb:\n");
  display(b, size_b);

  size_a = delete(a, size_a, b, size_b);
  printf("\na:\n");
  display(a, size_a);

  size_b = merge(b, size_b, a, size_a);
  printf("\nb:\n");
  display(b, size_b);

  sort(a, size_a);
  printf("\na:\n");
  display(a, size_a);

  return 0;
}
