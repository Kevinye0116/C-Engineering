//
// Created by Kevin Ye on 12/24/2023.
// Copyright (c) KevinYe on 12/24/2023.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ipd2b(char *s1, char *s2) {
  char *token = strtok(s1, ".");
  int binaryOctet;

  while (token != NULL) {
    int octet = atoi(token);
    for (int i = 7; i >= 0; i--) {
      binaryOctet = (octet >> i) & 1;
      sprintf(s2, "%s%d", s2, binaryOctet);
    }
    token = strtok(NULL, ".");
  }
}

int main(void) {
  char ip_address[16] = { 0 };
  scanf("%15s", ip_address);

  char ip_binary[33] = { 0 };
  ipd2b(ip_address, ip_binary);
  printf("%s\n", ip_binary);
  FILE *file = fopen("out.txt", "w");
  if (file == NULL) {
    printf("Unable to open %s\n", file);
    return 1;
  }
  fprintf(file, "%s", ip_binary);
  fclose(file);
  return 0;
}