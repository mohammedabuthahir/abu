import java.util.Scanner;
class Largest
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		System.out.println("enter number of elements");
		int x=s.nextInt();
		int y=s.nextInt();
		int z=s.nextInt();
	    if(x>y&&x>z)
	    {
	    	System.out.println("largest no is x");
	    }
	    else if(y>x&&y>z)
	    {
	    	System.out.println("largest no is y");
	    }
	    else
	    {
	    	System.out.println("largest no is z");
	    }
		
		
	}	
}
