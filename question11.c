/*11. WAP to take time as an input in below given format and convert the time format and
display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
Example –
“11:25” converted to “11 Hour and 25 Minute”
*/
#include"stdio.h"
int main()
{
    int hour,minute;
    printf("\"HH:MM\"\n");
    scanf("%d:%d",&hour,&minute);
    printf("\"%d hour and %d minute\" ",hour,minute);
return 0;
}
