#include <stdio.h>
#include <string.h>
#include <ctype.h>

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
};

void find_track(char search_term[])
{
  // remove newline '\n' added by fgets()
  search_term[strcspn(search_term, "\r\n")] = 0;

  for (int i = 0; i < 5; i++)
  {
    if (strstr(tolower((unsigned char)tracks[i]), tolower((unsigned char)search_term)))
      printf("Track %i: '%s'\n", i, tracks[i]);
  }
}

int main()
{
  char search_term[80];

  printf("Enter track name to search: ");
  fgets(search_term, sizeof(search_term), stdin);
  find_track(search_term);

  return 0;
}