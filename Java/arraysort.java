import java.util.Scanner;

public class arraysort
{
	static Scanner abc=new Scanner(System.in);
	public static void main(String[] args)
	{
		int[] num=new int[5];
		int i=0,j=0,m=0;	
		System.out.println("Enter 5 numbers:");
		for(i=0;i<5;i++)
		{
			num[i]=abc.nextInt();
		}
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(num[i]>num[j])
				{
					m=num[i];
					num[i]=num[j];
					num[j]=m;	
				}
			}	
		}
		System.out.println("Sorted Array:");
		for(i=0;i<5;i++)
		{
			System.out.print(num[i]+" ");
		}
		System.out.print("\n");
	}
}
