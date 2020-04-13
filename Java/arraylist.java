import java.util.*;

public class arraylist
{
	static Scanner sc=new Scanner(System.in);
	public static void main(String[] args)
	{
		ArrayList<String> x=new ArrayList<String>(5);
		System.out.println("ArrayLists are the advanced versions of array. These are collection classes which only refer to objects. ArrayLists only refer to objects, they don't edit them.\nEnter five elements for ArrayList:");
		for(int i=0;i<5;i++)
		{
			x.add(sc.nextLine());
		}
		System.out.println("\nEntered elements:");
		for(String s:x)
		{
			System.out.println(s);
		}
		System.out.println("\n\nIndex of the entered elements:");
		for(String s:x)
		{
			int i=x.indexOf(s);
			System.out.println("Element "+i+": "+s);
		}
		System.out.println("\n\nAnother way to print ArrayList using iterator. With the help of iterator,we can access elements in the arraylist:");
		Iterator e=x.iterator();
		while(e.hasNext())
		{
			System.out.println(e.next());
		}
		System.out.println("\n\nEnter the index of the element you want to update:");	
		int u=sc.nextInt();
		sc.nextLine();
		System.out.println("Enter the string with which you want to update:");
		String k=sc.nextLine();		
		x.set(u,k);
		System.out.println("\nArrayList after editing the element:\n"+x);
		System.out.println("\n\nEnter the index of the element you want to remove:");
		x.remove(sc.nextInt());
		System.out.println("ArrayList after printing the elements:\n"+x);
	}
}			
		
