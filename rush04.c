#include <unistd.h>
#include "ft_putchar.c"

void	rush(int x, int y)
{
	int x_cur;
	int y_cur;

	x_cur = 1;

	while (x_cur <= x){
		y_cur = 1;
		while (y_cur <= y){
			if (x_cur==1){
			       if (y_cur==1){
				       ft_putchar('A');
			       }
			       else if(y_cur==y){
				       ft_putchar('C');
			       }
			       else {
				       ft_putchar('B');
			       }
			}

			else if (x_cur==x){
				if (y_cur==1){
					ft_putchar('C');
				}
				else if (y_cur==y){
					ft_putchar('A');
				}
				else{
					ft_putchar('B');
				}
			}

			else {
				if ((y_cur==1) || (y_cur==y)){
					ft_putchar('B');
				}
				else {
					ft_putchar(' ');

				}
			}
			
			y_cur++;
		}
		write(1,"\n",1);
		x_cur++;
	}
}