import java.io.*;
public class Fileexception
{
	public static void main(String[] args)
	{
		try
		{
			FileInputStream f=new FileInputStream("C:\\text.txt");
		}
		catch(FileNotFoundException e)
		{
			System.out.println(e.toString());
			System.out.println("File not found!");
		}
	}
}
