public class jaggedarray
{
	public static void main(String[] args)
	{
		String[][] abc={{"Monday","Tuesday"},{"Wednesday","Thursday"},{"Friday","Saturday"},{"Sunday", ""}};
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<2;j++)
			{
				System.out.print(abc[i][j]+" ");
			}
		System.out.print("\n");		
		}
	}
}
