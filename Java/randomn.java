import java.util.Scanner;
public class randomn
{
	Scanner x=new Scanner(System.in);	
	public static void main(String[] arg)
	{
		int i, j;		
		System.out.println("This program will generate random numbers\n\n");
		for(i=0;i<5;i++)
		{
			j=(int)(Math.random()*100);
			while(j<10)
			{
				j=(int)(Math.random()*100);
			}
			System.out.println(j);
		}
	}
}
		
