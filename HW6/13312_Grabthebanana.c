#include <stdio.h>
int main()
{
	char target[] = {'B', 'A', 'N', 'A', 'N', 'A'};
	char data;
	int salah = 0, idx = 0;
	while ((data = getchar()) != EOF)
	{
		if (data == '0')
		{
			break;
		}else if(idx == 6){
			break;
		}
		else if (data == '/')
		{
			if(salah==1){
				salah--;
				printf("%d\n",idx);	
			}else if(salah>1){
				salah--;
				printf("-1\n");
			}
			else{
				if(idx>0)idx--;
				printf("%d\n",idx);	
			}

		}
		else
		{
			if (salah == 0)
			{
				if (data == target[idx])
				{
					idx++;
					printf("%d\n", idx);
				}
				else
				{
					salah ++;
					printf("-1\n");
				}
			}else{
				salah ++;
				printf("-1\n");
			}
		}
	}

	if (idx!=6){
		printf("No potassium.\n");
	}else {
		printf("Potassium!\n");
	}
	return 0;
	
}
