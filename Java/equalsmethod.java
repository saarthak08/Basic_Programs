import java.util.Scanner;
public class equalsmethod
{
	public static void main(String[] args)
	{		
		Newclass a=new Newclass();
		Newclass b=new Newclass();
		System.out.println("Enter the text for the first instance:");
		a.setQ();
		System.out.println("Enter the number for first instance:");
		a.setI();
		System.out.println("\nEnter the text for the second instance:");
		b.setQ();
		System.out.println("Enter the number for second instance:");
		b.setI();
		if(a.equals(b))
		{
			System.out.println("\n\nThe two objects are equal.");
		}
		else
		{
			System.out.println("\n\nThe two objects are not equal.");
		}
	}
}

class Newclass
{
		public static Scanner x=new Scanner(System.in);
		private String q;
		private int i;
		public void setQ()
		{
			this.q=x.next();
		}
		public void setI()
		{
			this.i=x.nextInt();
		}
		public boolean equals(Object obj)
		{
			if(this==obj)		//an object must be equal to itself
				return true;
			if(this==null)		//no object equals null			
				return false;
			if(this.getClass()!=obj.getClass())		//objects of different types are never equal
				return false;
			Newclass x=(Newclass) obj;
			return (this.q).equals(x.q) && (this.i)==(x.i);
		}
}

