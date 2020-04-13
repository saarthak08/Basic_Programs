import java.awt.event.*;
import javax.swing.*;

public class innerclass
{
	private String tick="Tick...";
	private String tock="Tock...";
	public static void main(String[] args)
	{
		innerclass p=new innerclass();	
		p.go();
	}
	private void go()
	{
		Timer t=new Timer(1000,new Ticker());
		t.start();
		JOptionPane.showMessageDialog(null,"Click OK to exit the program");
		System.exit(0);
	}
	class Ticker implements ActionListener
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
