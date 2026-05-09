#include <unistd.h>
#include "ft_putchar.c"

void ft_put_abc_line(int xc, int y){

	int y_cur;

	if (xc == 1){
		y_cur = 1;
	}
	else{ 
		y_cur = y;
	}

	while ((y_cur >= 1) && (y_cur <= y)){
		
		if (y_cur==1){
			ft_putchar('A');
			}
		else if(y_cur==y){
			ft_putchar('C');
		}
		else {
			ft_putchar('B');
			}
		if (xc == 1){
			y_cur ++;
			}
		else{ 
			y_cur--;
		}

		}
	}

void	rush(int x, int y){

	int x_cur;
	int y_cur;

	x_cur = 1;

	while (x_cur <= x){

		if (x_cur==1 || x_cur==x){
			ft_put_abc_line(x_cur, y);
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
