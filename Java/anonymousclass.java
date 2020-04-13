public class anonymousclass
{
	public static void main(String[] args)
	{
		Ball b= new Ball()
		{
			public void print()		
			{
			System.out.println("This is an example of anonymous class which is described where it is instantiated & its syntax is \"new ClassorInterface\". Class or interace is of the type which the new class would refer to like any interface or class.");
			}
		};
		b.print();
	}
}

interface Ball
{
	public void print();
}
	
