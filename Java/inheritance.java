import java.util.Scanner;
public class inheritance
{
	public static Scanner x=new Scanner(System.in);
	public static void main(String[] args)
	{	
		int t;
		one y=new two();
		one z=new one();
		y.print();
		z.print();			
		/*System.out.println("Enter two numbers a & b for object type of subclass:");
		(y.a)=x.nextInt();
		(y.b)=x.nextInt();
		t=y.math((y.a),(y.b));
		System.out.println("Sum for subclass type object:" +t+ "\n\n");
		System.out.println("Enter two numbers a & b for object type of base class:");
		(z.a)=x.nextInt();
		(z.b)=x.nextInt();
		t=z.math((z.a),(z.b));
		System.out.println("Sum for base class type object:" +t);
		*/
	}
}

class one
{
	public int a;
	public int b;
	public void print()
	{
		System.out.println("Hi! This is base class method which has protected visibility & is called from sublcass \'two\'.");
	}
	public int math(int q,int w)
	{
		int c;		
		c=q+w;		
		System.out.println("This is base class or super class method math. & a="+q+", b="+w);
		return c;		
	}
}

class two extends one
{
	public void print()
	{
		System.out.println("Hi! This is subclass method which is called from subclass.");
	}
	public int math(int f, int g)
	{	
		super.print();
		this.print();
		int c;		
		c=f+g;		
		System.out.println("This is subclass method math. & a="+f+", b="+g);
		return c;		
	}
		
}
	
	
