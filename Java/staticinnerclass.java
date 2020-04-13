import java.awt.event.*;
import javax.swing.*;

public class staticinnerclass
{
	private static String tick="Tick...";
	private static String tock="Tock...";
	public static void main(String[] args)
	{
		staticinnerclass i =new staticinnerclass();
		i.go();
	}

	public void go()
	{
		Timer t=new Timer(1000,new Ticker());
		t.start();
		JOptionPane.showMessageDialog(null,"Click OK to exit the program");
		System.exit(0);
	}

	static class Ticker implements ActionListener
	{
		private boolean ticks=true;
		public void actionPerformed(ActionEvent event)
		{
			if(ticks)
			{
				System.out.println(tick);
			}
			else
			{
				System.out.println(tock);
			}
			ticks=!ticks;
		}
	}		
}

