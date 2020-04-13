import com.math.Add;
import java.util.Scanner;

public class mypackage
{
	static Scanner k=new Scanner(System.in);	
	public static void main(String[] args)
	{
		int i;	
		Add x=new Add();
		System.out.println("Enter two numbers:");
		(x.x)=k.nextInt();
		(x.y)=k.nextInt();
		i=x.pro(x.x,x.y);
		System.out.println("Addition of the two numbers:"+i);
	}
}
				
