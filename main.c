#include <stdio.h>
#include "unitTests/unit_1.c"
#include "unitTests/unit_2.c"
#include "unitTests/unit_3.c"
#include "unitTests/unit_4.c"


int verseOne(void);
int verseTwo(void);
int verseThree(void);
int verseFour(void);


int main(void) {
  verseOne();
  verseTwo();
  verseThree();
  verseFour();
  return 0;
}