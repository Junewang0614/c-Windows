#include<stdio.h>
#include<string.h>

char str[107][57]= { '\0' };
char str0[107] = { '\0' };

int main()
{
	int i = 0,i0 = 0;
	int j = 0,j0 = 0;

	while (gets(str0))
	{
		fflush(stdin);
		i = 0;
		j0 = 0;
		while (1)
		{
			if (str0[j0] == '\0')
				break;

			for (j = 0;str0[j0] != ' ';j++)
			{
				if (!str0[j0])
					break;

				str[i][j] = str0[j0];
				//printf("%c\n",str[i][j]);
				if (j == 0)
					str[i][j] = str[i][j] + 'A'-'a';
				j0++;
			}


			str[i][j] = '\0';
			//printf("%s\n",str[i]);
			i++;j0++;

		}

		i0 = i;
		for (i = 0;i < i0;i++)
		{
			if (i == i0 - 1)
				printf("%s\n", str[i]);
			else
				printf("%s ", str[i]);

            str[i][0] = '\0';
		}
		memset(str0,'\0',sizeof(str0));
    }
}
