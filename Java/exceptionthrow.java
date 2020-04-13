import java.util.Scanner;
public class exceptionthrow
{
	public static Scanner x=new Scanner(System.in);
	public static void main(String[] args)
	{
		int a=0;
		System.out.println("Enter a number:");
		try
		{	
			a=input();
		}
		catch(Exception e)
		{			
			System.out.println("Oops! Thats not an integer");
			return;
		}
		System.out.println("Entered integer: "+a);
	}
	public static int input() 
		throws Exception
	{
		int k;
		k=x.nextInt();
		return k;
	}
}
