import java.lang.Math;
public class SmallestMultiple
{
	public static void main(String args[])
	{
		int k = 20;
		int i = 0;
		boolean check = true;
		int n = 1;
		int limit = (int)Math.sqrt(k);
		int p[] = new int[]{2,3,5,7,11,13,17,19,23};
		int a[] = new int[k];
		
		while(p[i] <= k)
		{
			a[i] = 1;
			if(check == true)
			{
				if(p[i] <= limit)
					a[i] = (int)(Math.log(k)/Math.log(p[i]));
				else
					check = false; 
			}
			n *=  (int)Math.pow(p[i],a[i]);
			i = i + 1;
		}
		System.out.println("The smallest number to be divisible by 1 to 20 is "+n);
	}
}