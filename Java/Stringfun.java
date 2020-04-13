import java.util.Scanner;
public class Stringfun
{
	static Scanner x=new Scanner(System.in);
	public static void main(String[] args)
	{
		System.out.println("Enter a string:");
		String a=x.nextLine();
		String c=a.trim();
		System.out.println("\n\nTrimmed String:\n"+c+"\n\n\nLength of the String: "+a.length()+"\n\n\nEnter the indices from & upto which you want to extract a substring from the entered string:");
		String b = a.substring((x.nextInt()+1),x.nextInt()+1);
		System.out.println("\nSubstring:\n"+b);
	}
}
		
		
			
