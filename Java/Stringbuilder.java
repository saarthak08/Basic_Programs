import java.util.Scanner;

public class Stringbuilder
{	
	static Scanner sc=new Scanner(System.in);
	public static void main(String[] args)
	{
		int k=0;
		System.out.println("Enter a string:");
		StringBuilder a=new StringBuilder(sc.nextLine());
		for(int i=0;i<a.length();i++)
		{
			char c=a.charAt(i);
			if (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
		 	{
				k++;
			}
		}
		System.out.println("Number of vowels: "+k);
	}
}
