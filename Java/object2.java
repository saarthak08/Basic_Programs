import java.util.Scanner;

public class object2
{
	static Scanner sc=new Scanner(System.in);	
	public static void main(String[] args)
	{
		String a;		
		myclass x= new myclass();
		System.out.println("Enter a number:");
		while(!sc.hasNextInt())
		{
			a=sc.next();
			System.out.println("Please enter an integer value only!"); 
		}	
			x.setI(sc.nextInt());
		System.out.println("\nEntered value of i: " +(x.getI()));
	}
}

class myclass
{
	private int i,j;
	public void setI(int i)
	{
		this.i=i;
	}
	{
		i=1;
		System.out.println("Hello! I am the initializer. When an obect is created, first I run & then my rival \'Constructor\'");
		System.out.println("Value of i in the initializer: " +i);
	}
	public myclass()
	{	
		System.out.println("\n\nHello! I am constructor to tell you that a new object is created!\n\n");
		
	} 
	public int getI()
	{
		return (this.i);
	}
}
		
