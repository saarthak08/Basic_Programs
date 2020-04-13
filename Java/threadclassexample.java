public class threadclassexample
{
	public static void main(String[] args)
	{
		Thread clock =new CountDownClock();
		clock.start();
		System.out.println("Hi! this is a thread running");
	}
}

class CountDownClock extends Thread
{
	public void run()
	{
		for(int i=10;i>=0;i--)
		{
			try
			{
				System.out.println(i);
				Thread.sleep(1000);
				System.out.println("Thread is running");
			}
			catch(InterruptedException e)
			{
			}
		}
	}
}
