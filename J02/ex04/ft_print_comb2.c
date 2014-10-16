#include <unistd.h>

void my_aff_comb2(void)
{
	char n1[1];
	char n2[1];
	char n3[1];

	n1[0] = '0';
	while(n1[0] <= '9')
	{
		n2[0] = '0';
		while(n2[0] <= '9')
		{
			n3[0] = '0';
			while(n3[0] <= '9')
			{
				if(n1[0] < n2[0] && n2[0] < n3[0])
				{
					write(1, n1, 1);
					write(1, n2, 1);
					write(1, n3, 1);
					if(n1[0] < '7')
						write(1, ",", 1);
					if(n1[0] < '7')
						write(1, " ", 1);
				}
				n3[0]++;
			}
			n2[0]++;
		}
		n1[0]++;
	}
}

int main(void)
{
    my_aff_comb2();
}
