import java.util.*;
public class Calculator
{
	static Scanner x= new Scanner(System.in);
	public static void main(String[] arg)
	{
		System.out.println("Enter two numbers:");
		int z,y,k;
		try
		{
			z=x.nextInt();
		}
		catch(InputMismatchException e)
		{
			while(!x.hasNextInt())
			{
				x.next();		
				System.out.print("\n\n");	
				System.out.println(e.toString());
				System.out.println("Not an Integer!\nPlease try again!\n");
			}
			z=x.nextInt();
		}
		try
		{
			y=x.nextInt();
		}
		catch(InputMismatchException e)
		{
			while(!x.hasNextInt())
			{
				x.next();
				System.out.print("\n\n");	
				System.out.println(e.toString());			
				System.out.println("Not an Integer!\nPlease try again!\n");
			}
			y=x.nextInt();
		}
		System.out.println("\nEnter:\n\'1\' for Addition\n\'2\' for Subtraction\n\'3\' for Multiplcation\n\'4\' for Division\n");
		int a;
		a=x.nextInt();
		if(a==1)
		{
			k=y+z;
			System.out.println("Addition of " +z+ " & " +y+ " is " +k);
		}
		else if(a==2)
		{
			k=z-y;
			System.out.println("Subtraction of " +z+ " & " +y+ " is " +k);
		}
		else if(a==3)
		{
			k=y*z;
			System.out.println("Multiplication of " +z+ " & " +y+ " is " +k);
		}
		else if(a==4)
		{
			float i =(float)z/y;
			System.out.println("Division of " +z+ " & " +y+ " is " +i);
		}
		else
			System.out.println("Error! Invalid Input");
	}
}
