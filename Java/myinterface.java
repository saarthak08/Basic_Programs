public class myinterface
{
	public static void main(String[] args)
	{
		mg y=new mg();
		y.p();
		y.printf();
		y.printk();
		y.printg();	
		mg x=new mg();
		myi p=(myi)x;
		p.callspi();			
	}
}

class myclass
{
	public void print()
	{
		System.out.println("Hi! This is the method of the superclass.");
	}
}

interface myi
{
	public void printf();
	public void callspi();
}

interface kyi extends myi
{
	public void printk();
}

interface pyi
{
	public void printg();
}

class mg extends myclass implements myi, pyi 
{
	public void p()
	{
		super.print();
	}
	public void printf()
	{
		System.out.println("Hi! This is the method of interface \'myi\'.");
	}
	public void printk()
	{
		System.out.println("Hi! This is the method of subinterface \'kyi\' of interface \'myi\'.");
	}
	public void printg()
	{
		System.out.println("This is the method of interface of \'pyi\'.");
	}
	public void callspi()
	{
		System.out.println("This is the method called when a new object is made of class which implements interface \'myi\' & then a variable of type \'myi\'is used to refer to it.");
		
	}	
}
