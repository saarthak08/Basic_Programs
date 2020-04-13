import java.util.*;
public class exception
{
	static Scanner s=new Scanner(System.in);	
	public static void main(String[] args)
	{
		int x=1,y=1,z=1;
		float c=1;		
		try
		{
			System.out.println("Enter first number:");
			x=s.nextInt();
		}
		catch(Exception k)
		{
			while(!s.hasNextInt())
			{			
				s.next();
				System.out.print("\n\n");
				System.out.println(k.toString());
				System.out.println("Not an integer!");
				System.out.println("Try Again!\n");
			}
			x=s.nextInt();
		}
		try
		{
			System.out.println("Enter second number:");
			y=s.nextInt();
		}
		catch(Exception k)
		{
			while(!s.hasNextInt())
			{			
				s.next();
				System.out.print("\n\n");
				System.out.println(k.toString());
				System.out.println("Not an integer!");
				System.out.println("Try Again!\n");
			}
			y=s.nextInt();
		}
		try
		{
			c=(float)x/y;
			System.out.println("\n\nDivision as a float: " +c);
			z=x/y;
			System.out.println("Division as an integer: " +z);
			System.out.println("HI");
		}
		catch(ArithmeticException e)
		{			
			System.out.print("\n\n");			
			System.out.println("Oops! You can't divide by zero\n" + e.toString());
		}
		catch(Exception e)
		{
			System.out.print("\n\n");
			System.out.println(e.getMessage());
			return;
		}
		finally
		{
			System.out.print("\nInput Numbers: " +x);
			System.out.println(" & " +y);
		}
		System.out.println("HI");
		


	}
} 

