public class SumOfMultiples
{
	public static void main(String args[])
	{
		int x,sum = 0;
		for(x=1;x<1000;x++)
		{
			if(x%3 == 0)
				sum+=x;
			else if(x%5 == 0)
				sum+=x;
		}
		System.out.println(sum + " is the sum.");
	}
}
