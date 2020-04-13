public class singletonclass
{
	private static singletonclass x;
	private singletonclass()
	{}
	public static singletonclass getX()
	{
		if(x==null)
		{
			x= new singletonclass();
		}
		return x;
	}
	public void print()
	{
		System.out.println("This is a singleton class example. Only a single instance of the class will be made.");	
		System.out.println("One instance has been made.\n\n");
	}
	public static void main(String[] args)
	{
		singletonclass k= x.getX();
		k.print();
		singletonclass m=x.getX();
		System.out.println("Second instance of the class has been made!");
		if(k==m)
		{
		System.out.println("Oops! first instance is equal to second instance i.e. only one instance is made."); 	
		}
	}
}


		

		
	
	
