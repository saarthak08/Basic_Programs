import java.util.*;
public class strings
{
	public static char[] a,b;
	public static char[] d=new char[100];
	public static char[] c=new char[100];
	public static int index,flag=0;
	public static Scanner sc=new Scanner(System.in);
	public static void main(String[] args)
	{
		int i,j,len,k,z,y,x=0;
		boolean u;
		do
		{
			System.out.println("Enter a string: ");
			a=sc.next().toCharArray();
			len=a.length;
			System.out.println("Enter a choice:\n1. Concatenation\n2. String Search\n3. String Replace\n4. Exit");
			i=sc.nextInt();
			switch(i)
			{
				case 1: 
					
					break;
				case 2:
					u=substring();
					if(u==true)
					{
						System.out.println("Substring is present in the string");
					}
					else
						System.out.println("Substring is not present in the string");
					break;		
				case 3:
					u=substring();
					if(u==true)
					{
						System.out.println("Substring is present in the string");
						z=b.length;
						j=index++;
						for(k=j;k<(a.length)-index;k++)
						{
							j=j+b.length;
						}
						for(k=index,y=0;k<b.length;y++,k++)
						{
							a[k]=b[y];
						}
						
					}
					else
						System.out.println("Substring is not present in the string");	
					break;
			}
		}while(i!=4);			
	}
	public static boolean substring()
	{
		int i,j,k,x=0,y;
		System.out.println("Enter a substring of the string:");
		b=sc.nextLine().toCharArray();
		for(k=0;k<a.length;k++)
		{
			if(a[k]==b[0])
			{
				index=k;
				x++;
				for(y=k+1;y<b.length;y++)
				{
					if(a[k]==b[x])
					{
						x++;
						flag++;
					}
					else
					{
						flag=0;
						break;
					}
				}
			}
		}
		if(flag==(b.length)-1)
		{			
			return true;
		}
		else
			return false;					
	}
						
		
}	
	
