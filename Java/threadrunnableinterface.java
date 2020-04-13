import java.util.*;

public class threadrunnableinterface
{
	public static void main(String[] args)
	{
		Thread clock=new countdown();
		ArrayList<Runnable> a=new ArrayList<Runnable>();
		a.add(new Launchevent(16,"Flood The Pad!"));
		a.add(new Launchevent(6,"Start Engines!"));
		a.add(new Launchevent(0,"LiftOff!"));
		clock.start();
		for(Runnable e :a)
		{
			new Thread(e).start();
		}
	}
}

class Launchevent implements Runnable
{
	private int time;
	private String message;
	public Launchevent(int time,String message)
	{
		this.time=time;
		this.message=message;
	}
	public void run()
	{
		try
		{
			Thread.sleep(20000-(time*1000));
		}
		catch(InterruptedException E)
		{}
		System.out.println(message);
	}
}


class countdown extends Thread
{
	public void run()
	{
		for(int i=20;i>=0;i--)
		{
			System.out.println("T minus "+i+" seconds");
			try
			{
				Thread.sleep(1000);
			}
			catch(InterruptedException E)
			{}
		}
	}
}
