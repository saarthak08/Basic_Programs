import java.util.Scanner;

public class object
{
	static Scanner sc=new Scanner(System.in);	
	public static void main(String[] args)
	{
		int i;
		Add k = new Add();
		System.out.println("Enter two numbers:");
		(k.x)=sc.nextInt();
		(k.y)=sc.nextInt();
		i=k.pro((k.x),(k.y));
		System.out.print("\n\nAddition of " +(k.x));
		System.out.print(" & " +(k.y));
		System.out.println(":\n" +i);
	}
}

class Add
{
	int x,y;
	public int pro(int a,int b)
	{
		int m;
		m=a+b;
		return m;
	}
}

