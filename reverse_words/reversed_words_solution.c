#include <stddef.h>

char *reverse_words (const char *words, size_t length, char *reversed)
{
  size_t c = 0;
  int i = 0;
  int j = 0;
  int k = 0;
  if (!words || words[0] == 0)
  {
    *reversed = 0;
    return (reversed);
  }
  while (words[c])
  {
    if (words[c] == ' ')
    {
      i = length;
      reversed[i] = 0;
      i--;
      while (words[j])
      {
        while (words[j] && words[j] != ' ')
        {
          j++;
          k++;
        }
        if (words[k] != 0)
        {
          k++;
          j--;
        }
        else
        {
          k = length;
          j--;
        }
        while (words[j] != ' ' && j >= 0 && i >= 0)
        {
          reversed[i] = words[j];
          i--;
          j--;
        }
        if (i > 0)
        {
          reversed[i] = ' ';
          i--;
        }
        j = k;
      }
	  return (reversed);
    }
    c++;
  }
  while (words[i])
  {
    reversed[i] = words[i];
    i++;
  }
  reversed[length] = 0;
  return (reversed);
}
