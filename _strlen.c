#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s) {
  int length = 0;
  int i;

  for (i = 0; s[i] != 0; i++) {
    length++;
  }
  return (length);
}
