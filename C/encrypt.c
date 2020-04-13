void encrypt(char *c)
{	
	while(*c)
	{
		*c=*c^31;
		c++;
	}
}
