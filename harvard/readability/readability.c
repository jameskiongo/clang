#include <ctype.h>
/* #include <math.h> */
#include <stdio.h>
#include <string.h>

int number_of_sentences(char s[]);
int number_of_letters(char s[]);
int number_of_words(char s[]);
int main(void) {
  char sentence[640];
  printf("Text: ");
  fgets(sentence, sizeof(sentence), stdin);
  float length = strlen(sentence);
  float letters = number_of_letters(sentence);
  float words = number_of_words(sentence);
  float sentences = number_of_sentences(sentence);
  float L = (letters / words) * 100.0;
  float S = (sentences / words) * 100.0;
  float total = 0.0588 * L - 0.296 * S - 15.8;
  if (total < 1) {
    printf("Before Grade 1\n");
  } else if (total >= 16) {
    printf("Grade 16+\n");
  } else {
    printf("Grade %.0f\n", total);
  }
  /* printf("%.0f\n", round(total)); */
}
int number_of_letters(char s[]) {
  int count = 0;
  for (int i = 0, n = strlen(s); i <= n; i++) {
    if (isalpha(s[i]) != 0) {
      count++;
    }
  }

  return count;
}
int number_of_words(char s[]) {
  int words = 0;
  for (int i = 0, n = strlen(s); i <= n; i++) {
    if (isspace(s[i]) != 0) {
      words++;
    }
  }
  return words;
  return 0;
}
int number_of_sentences(char s[]) {
  int sentence = 0;
  for (int i = 0, n = strlen(s); i <= n; i++) {
    if (s[i] == '.' || s[i] == '?' || s[i] == '!') {
      sentence++;
    }
  }
  return sentence;
}
