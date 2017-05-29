#include <stdio.h>

enum week { sunday, monday, tuesday, wednesday, thursday, friday, saturday };

int main()
{
    enum week today;
    today = 4;
    printf("Day %d",today+1);
    return 0;
}