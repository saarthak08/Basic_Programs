public class toStringmethod
{
	public static void main(String[] args)
	{
		Employee emp=new Employee("Martinez","Anthony");
		System.out.println("This is a program to describe Object class methods & getClass() method of the Object class is used to determine the name of the class with the extension of getName() method \nAlso, a point to remember that getClass() method returns an object of type of the variable which to which it is referred");
		System.out.println(emp.toString());
	}	
}

class Employee
{
	private String lastName;
	private String firstName;
	public Employee(String lastName,String firstName)
	{
		this.lastName=lastName;
		this.firstName=firstName;
	}
	public String toString()
	{
		return "Name of the class:"+this.getClass().getName()+"\nEmployee["+this.firstName+" "+this.lastName+"]";
	}
}
