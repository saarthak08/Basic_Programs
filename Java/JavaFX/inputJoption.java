import javax.swing.JOptionPane;
public class inputJoption
{
	public static void main(String[] arg)
	{
		String s;
		s=JOptionPane.showInputDialog("Enter an Integer:");
		int x= Integer.parseInt(s);
		System.out.println("You entered " + x + ".");
	}
}
