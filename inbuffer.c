#include <stdio.h>

int main()
{
        char string[5];
        char c;

        scanf("%s", string);
        //getchar();
        //fflush(stdin);
		//rewind(stdin);
		//scanf("%*c", c);
		scanf(" %c", &c);

        printf("%s\n", string);
        printf("!!%c\n", c);

        return 0;
}
