#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat -  concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: unsigned int
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n) {
  // Check if s1 or s2 is NULL.
  if (s1 == NULL) {
    s1 = "";
  }
  if (s2 == NULL) {
    s2 = "";
  }

  // Get the length of s1.
  int len1 = strlen(s1);

  // If n is greater than the length of s2, then use the entire string s2.
  int len2 = n >= strlen(s2) ? strlen(s2) : n;

  // Allocate memory for the new string.
  char *new_str = malloc(len1 + len2 + 1);

  // Copy s1 to the new string.
  memcpy(new_str, s1, len1);

  // Copy the first n bytes of s2 to the new string.
  memcpy(new_str + len1, s2, len2);

  // Null terminate the new string.
  new_str[len1 + len2] = '\0';

  return new_str;
}
