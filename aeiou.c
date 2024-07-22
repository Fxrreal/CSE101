#include <stdio.h>
int main() {
  char ch;

  scanf("%c", &ch);

  if (isalpha(ch) && islower(ch) && (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
    printf("%c is a vowel\n", ch);
  } else {
    printf("%c is a consonant\n", ch);
  }

  return 0;
}