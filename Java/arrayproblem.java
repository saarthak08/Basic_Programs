import java.util.Scanner;
public class arrayproblem
{
	static Scanner x=new Scanner(System.in);
	public static void main(String[] args)
	{
		int i=0,j=0;	
		boolean[] locker=new boolean[1001];
		for(i=1;i<=1000;i++)
		{
			for(j=1;j<=1000;j++)
			{
				if((j%i)==0)
				{
					locker[j]=!locker[j];
				}
			}
		}
		System.out.println("Initially, all the lockers were closed. Then, Bobo started opening the lockers. Firstly, he opened all the 1000 lockers. Then he closed every second locker & then he started closing every third locker if it is opened & if it is closed,then he opened it. He repeated these steps for every fifth locker, sixth locker & so on.Now after repeating it the 1000th time at the end, opened lockers are:");
		for(i=0;i<1000;i++)
		{
			if(locker[i]==true)
			{
				System.out.println(i+" ");
			}
		}
	}
}
