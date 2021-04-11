public class LargestPalindromeProduct
{
	static boolean checkPalindrome(int num)
	{
		int a = 0,b = num, temp = 0;
		while(num > 0)
		{
			a = num % 10;
			num = num / 10;
			temp = temp * 10 + a;
		}
		if(temp == b)
			return true;
		else
			return false;
	}
	public static void main(String args[])
	{
		int i,j,product = 0,pal = 0,m1 = 0,m2 = 0;
		for(i=999;i>=100;i--)
		{
			for(j=999;j>=100;j--)
			{
				product = i * j;
				if(checkPalindrome(product))
				{
					if(product > pal)
					{
						m1 = i;
						m2 = j;
						pal = product;
					}
				}
			}
		}
		System.out.println(pal + " is the largest palindrome product of two 3 digit numbers i.e.");
		System.out.println(m1 + "*" + m2);
	} 
}

