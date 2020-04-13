import java.util.*;

public class binarysearchrecurrsion
{
	public static Scanner sc=new Scanner(System.in);
	public static void main(String[] args) throws Exception
	{
		int[] a=new int[10];
		boolean k;
		int i=0,j=0,n=0,f=0,l=0;
		System.out.println("Enter the elements of the array:");
		for(i=0;i<10;i++)
		{
			a[i]=sc.nextInt();
		}
		System.out.println("\n\nEnter a number you want to search:");
		n=sc.nextInt();
		for(i=0;i<10;i++)
		{
			for(j=i+1;j<10;j++)
			{
				if(a[i]>a[j])
				{
					l=a[i];
					a[i]=a[j];
					a[j]=l;	
				}
			}	
		}
		System.out.println("\n\nSorted Array:");
		for(i=0;i<10;i++)
		{
			System.out.print(a[i]+" ");
		}
		l=a.length;
		f=0;
		k=binarysearch(a,n,f,l);
		if(k==true)
		{
			System.out.println("\n\n\nThe number is in the array.");
		}
		else
		{
			System.out.println("\n\n\nThe number is not in the array.");
		}
	}
	public static boolean binarysearch(int[] x,int y,int f,int l)
	{
		int mid;
		int i;
		mid=(f+l)/2;	
		System.out.println("\n\nProcessed Array:");
		for(i=f;i<l;i++)
		{
			System.out.print(x[i]+" ");
		}			
		System.out.println("\nFirst number of array: "+f+"\nLast number of array: "+l+"\nMiddle number of array: "+ mid);
		if(y==x[mid])
		{
			return true;
		}
		else if(y>x[mid])
		{
			return binarysearch(x,y,(mid+1),l);
		}
		else if(y<x[mid])
		{
			 return binarysearch(x,y,f,(mid-1));
		} 	
		return false;
	}
}


		
