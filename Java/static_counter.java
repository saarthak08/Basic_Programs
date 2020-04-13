public class static_counter
{
	public static void main(String[] args)
	{
		int i;		
		printCount();
		for(i=0;i<10;i++)
		{
			CountTest c1= new CountTest();
			printCount();
		}
	}
	private static void printCount()
	{
		System.out.println("There are now " +CountTest.getInstanceCount() + " instances of the static_counter class.\n");
	}
}

class CountTest
{
	private static int instanceCount=0;
	public CountTest()
	{
		System.out.println("Hello! I am constructor. A new instance or object of the class is created.");		
		instanceCount++;
	}
	public static int getInstanceCount()
	{
		return instanceCount;
	}
}
