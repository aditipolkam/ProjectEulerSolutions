import java.lang.Math;
public class LargestPrimeFactor
{
	public static void main(String args[])
	{
		long num = 600851475143L, i = 2;
		while(i <= Math.sqrt(num))
		{
			if(num%i == 0)
			{
				while(num%i==0)
        		{
            		num/=i;
        		}           
        		if(num==1)
        		{
            		num=i;
            		break;
        		}
			}
			else
			{
				i++;
			}
		}
		System.out.println(num);
	}
}

