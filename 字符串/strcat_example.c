/* strcat example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[80];
  strcpy (str,"these ");
  strcat(strcat(strcat(str, "strings "), "are "), "concatenated.");
  /*strcat (str,"strings ");
  strcat (str,"are ");
  strcat (str,"concatenated.");*/
  puts (str);
  return 0;
}
