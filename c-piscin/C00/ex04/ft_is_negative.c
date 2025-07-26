#include <unistd.h>

void ft_is_negative(int n)
{
	char p='P';
	char ne='N';

	if(n>=0)write(1,&p,1);
	else write(1,&ne,1);
	
}
