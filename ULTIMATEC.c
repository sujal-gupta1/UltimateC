#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

void addnum(){
	float num1, num2, sum;
    printf("Enter first number:");
    scanf("%e",&num1);
    printf("Enter second number:");
    scanf("%e",&num2);
    sum=num1+num2;
    printf("sum of entered number is %.2e\n\n\n",sum);
	}
void mulnum(){
	float num1, num2, mu1;
    printf("Enter first number:");
    scanf("%e",&num1);
    printf("Enter second number:");
    scanf("%e",&num2);
    mu1=num1*num2;
    printf("Multiplication of entered number is %.2e\n\n\n",mu1);
	}
void ascii(){
	 char ch;
    printf("Enter single character:");
    scanf("%s",&ch);
    printf("ASCII value of '%c' is %d\n\n\n",ch,ch);
	}
void swapvar(){
	double num1, num2;
	double tmp;
	printf ("Enter first number:");
	scanf ("%lf",&num1);
	printf ("Enter second number:");
	scanf ("%lf",&num2);
	printf("num1=%.2lf, num2=%.2lf\n",num1,num2);
	tmp=num1;
	num1=num2;
	num2=tmp;
	printf("num1=%.2lf, num2=%.2lf\n\n\n",num1,num2);
	}
void swapvarn(){
	double num1, num2;
    printf("Enter first number:");
    scanf("%lf",&num1);
    printf("Enter second number:");
    scanf("%lf",&num2);
    printf("num1=%.2lf, num2=%.2lf\n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("num1=%.2lf, num2=%.2lf\n\n\n",num1,num2);
	}
void evennum(){
	int num;
    printf("enter number:");
    scanf("%d",&num);
    if(num%2==0) {
        printf("number is even\n");
    } 
    else {
        printf("number is odd\n");
    }
	printf("\n\n");
	}
void vocon(){
	char ch;
    int lowercase_vowel, uppercase_vowel;
    printf ("Enter character:");
    scanf("%s",&ch); 											lowercase_vowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');    		                  uppercase_vowel=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if(ch<65 || ch>122){
    	printf("Entered character is not an alphabet\n");
    }
    else if(lowercase_vowel||uppercase_vowel){
    	printf ("Entered character is vowel.\n");
    }
    else{
	  printf ("Entered character is consonant. \n");
	}	
    printf("\n\n");
	}
void maxnum(){
	double n1, n2, n3;
    printf ("Enter three numbers:");
    scanf ("%lf %lf %lf",&n1,&n2,&n3);
    if(n1>=n2){
        if(n1>=n3)
        printf ("largest number=%.5lf",n1);
        else
        printf ("largest number=%.5lf",n3);
    }
    else{
        if(n2>=n3)
        printf ("largest number=%.5lf",n2);
        else
        printf ("largest number = %.5lf",n3);
    }	
    printf("\n\n\n");
	}
void quad(){
	double a, b, c, d, r1, r2, rp, ip;
    printf("Enter value of a, b, c:");
    scanf ("%lf %lf %lf",&a,&b,&c);
    d= b*b-4*a*c;
    if(d>0){
        r1= (-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("roots are = %lf,%lf",r1,r2);
    }
    else if (d==0){
        r1=r2=(-b)/(2*a);
        printf("root1=root2=%lf",r1);
    }
    else {
          rp = -b / (2 * a);
          ip = sqrt(-d) / (2 * a);
          printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", rp, ip, rp, ip);
    }	
    printf("\n\n\n");
	}
void year(){
	int year;
    printf ("Enter a year:");
    scanf ("%d",&year);
    if(year%400==0){
        printf ("%d is a leap year",year);
    }
    else if(year%100==0){
       printf ("%d is not a leap year",year);
    }
   else if (year%4==0){
       printf ("%d is a leap year",year);
   }
    else {
        printf ("%d is not a leap year",year);
    }
    printf("\n\n\n");
	}
void sign(){
	int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0){
    	printf ("This is positive number\n");
    }
    else if (num<0){
    	printf ("This is negative number\n");
    }
    else{
    	printf ("This is neither positive nor negative\n");
    }
    printf("\n\n");
	}
void Isalpha(){
	 char ch;
     printf ("Enter character");
     scanf ("%s",&ch);
     if(isalpha(ch)){
     	printf ("%c is an alphabet",ch);
     }
      else{
     	printf ("%c is not an alphabet",ch);
       }	
     printf("\n\n\n");
	 }
void nsum(){
	int n, i,sum=0;
    printf ("Enter a positive integer:");
    scanf ("%d",&n);
    if(n>0){
    	i=1;
    	while (i<=n) {
		 	sum +=i;
     		++i;
  	   }
    printf ("sum=%d",sum);}
    else{
       printf("You enetred a wrong number");
    }
    printf("\n\n\n");
	}
void nfact(){
	 int n, i;
 	unsigned long long fact = 1;
     printf("Enter an integer: ");
     scanf("%d", &n);
 	if (n < 0){
 		printf("Error! Factorial of a negative number doesn't exist.");
 	}
 	else {
 		for (i = 1; i <= n; ++i) {
			 fact *= i;
		 }
	 printf("Factorial = %llu", fact);
 	}
 	printf("\n\n\n");
	 }
void table(){
	 int n, i;
	 printf("Enter an integer: ");
	 scanf("%d", &n);
	 for (i = 1; i <= 10; ++i) {
		 printf("%d * %d = %d \n", n, i, n * i);
	 }
 	printf("\n\n\n");
	 } 
void fibo(){
	int t1=0, t2=1, nextterm=0, n,i;
    printf ("enter value of n:");
    scanf ("%d",&n);
    printf ("fibonacci series :%d,%d,",t1,t2);
    nextterm=t1+t2;
    for(i=3;i<=n;++i){
    	 if(i<n) {
    	 	  printf ("%d, ",nextterm); 
    	 	  }
     	else {
     	     printf("%d",nextterm); 
     	     }
     	t1=t2;
         t2=nextterm;
         nextterm=t1+t2;
    }
    printf("\n\n\n");
	}
void gcd(){
	int n1, n2;
	 printf("Enter two positive integers: ");
	 scanf("%d %d",&n1,&n2);
	 if(n1<=0 || n2<=0){
 		printf("Incorrect input");
 	}
 	else{
		 while(n1!=n2){
	 		if(n1 > n2){
		 		n1 -= n2;
	 		}
	 		else{
		 		n2 -= n1;
	 		}
	 	}
	 	printf("GCD = %d",n1);
 	}
 	printf("\n\n\n");
	}
void lcm(){
	 int n1, n2, max;
	 printf("Enter two positive integers: ");
	 scanf("%d %d", &n1, &n2);
	 if(n1<=0 || n2<=0){
 		printf("invalid input");
 	}
 	else{
 		max = (n1 > n2) ? n1 : n2;
		 while (1) {
			 if (max % n1 == 0 && max % n2 == 0) {
				 printf("The LCM of %d and %d is %d.", n1, n2, max);
				 break;
			 }
		 	++max;
	 	}
 	}
 	printf("\n\n\n");
	}
void countn(){
	 long long n;
	 int count = 0;
	 printf("Enter an integer: ");
	 scanf("%lld", &n);
	 do {
		 n /= 10;
		 ++count;
	 } while (n != 0);
	 printf("Number of digits: %d", count);
	 printf("\n\n\n");
	 }
void revn(){
 	int n, rev = 0, remainder;
	 printf("Enter an integer: ");
	 scanf("%d", &n);
	 while (n != 0) {
		 remainder = n % 10;
		 rev = rev * 10 + remainder;
		 n /= 10;
	 }
	 printf("Reversed number = %d", rev);
 	printf("\n\n\n");
	 }
void power(){
 	int base, exp;
	 long double result = 1.0;
	 printf("Enter a base number: ");
	 scanf("%d", &base);
	 printf("Enter a positive exponent: ");
	 scanf("%d", &exp);
	 if(exp<=0){
	 	printf("Invalid input");
	 	
	 }
	 else{
		 while (exp != 0) {
			 result *= base;
		 	--exp;
	 	}
	 	printf("Answer = %.0Lf", result);
	 }
 	printf("\n\n\n");	
	 }
void pali(){
 	int n, reversed = 0, remainder, original;
 	printf("Enter an integer: ");
	 scanf("%d", &n);
	 original = n;
	 while (n != 0) {
		 remainder = n % 10;
		 reversed = reversed * 10 + remainder;
		 n /= 10;
	 }
	 if (original == reversed)
	 printf("%d is a palindrome.", original);
	 else{
		 printf("%d is not a palindrome.", original);
 	}
 	printf("\n\n\n");
	 }
void prime(){
	 int n, i, flag = 0;
	 printf("Enter a positive integer: ");
	 scanf("%d", &n);
	 for (i = 2; i <= n / 2; ++i) {
		 if (n % i == 0) {
		 flag = 1;
		 break;
	 	}
	 }
	 if (n == 1) {
		 printf("1 is neither prime nor composite.");
	 } 
	 else {
	 	if (flag == 0){
	 	printf("%d is a prime number.", n);
	 	}
	 	else{
		 	printf("%d is not a prime number.", n);
	 	}
 	}
 	printf("\n\n\n");
	 }
 void primei(){
 	int low, high, i, flag;

	 printf("Enter two numbers(intervals): ");

 	scanf("%d %d", &low, &high);

 	printf("Prime numbers between %d and %d are: ", low, high);

 	while (low < high) {

 		flag = 0;

 		if (low <= 1) {

 			++low;

 			continue;

 		}

 		for (i = 2; i <= low / 2; ++i) {

 			if (low % i == 0) {

 				flag = 1;

 				break;

 			}

 		}

 		if (flag == 0)

 			printf("%d ", low);

 			++low;

 	}
 	printf("\n\n\n");
 }
void arm(){
 	int num, originalNum, remainder, result = 0;
	 printf("Enter a three-digit integer: ");
	 scanf("%d", &num);
	 originalNum = num;
	 while (originalNum != 0) {
		 remainder = originalNum % 10;
		 result += remainder * remainder * remainder;
		 originalNum /= 10;
	 }
	 if (result == num){
		 printf("%d is an Armstrong number.", num);
	 }
	 else{
		 printf("%d is not an Armstrong number.", num);
	 }
 	printf("\n\n\n");
	 }
void factor(){
	int n, i;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
 	if(n<=0){
 		printf("Invalid input");
 	}
 	else{
	 	printf("Factors of %d are: ", n);
	 	for (i = 1; i <= n; ++i) {
 			if (n % i == 0) {
	 			printf("%d ", i);
 			}
 		}
 	}
 	printf("\n\n\n");
	}
void armi(){
	int num,originalnum,rem,count=0,low,high;
    double result=0.0;
    printf("Enetr two number:");
    scanf("%d %d",&low,&high);
    printf("Armstrog numbers between %d and %d are:",low,high);
    if(high<low){
        high=high+low;
        low=high-low;
        high=high-low;
    }
    for(num=low+1;num<high;++num){
        originalnum=num;
        while(originalnum!=0){
            originalnum/=10;
            ++count;
        }
        originalnum=num;
        while(originalnum!=0){
            rem=originalnum%10;
            result +=pow(rem,count);
            originalnum /=10;
        }
        if((int)result==num){
        printf("%d,",num);
        }
        count=0;
        result=0;
    }
    printf("\n\n\n");
	}
void bindec(){
	 int n,m,r,i=0,d=0;
	printf("Enter a binary number:");
    scanf("%d",&n);
    m=n;
    while(n){
        r=n%10;
         d+=r*pow(2,i);
         n=n/10;
         i++;
    }
    printf("%d in binary = %d in decimal",m,d);
    printf("\n\n\n");
}
void octdec(){
	 int n,m,r,i=0,d=0;
	 printf("Enter an octal number:");
     scanf("%d",&n);
     m=n;
     while(n){
         r=n%10;
          d+=r*pow(8,i);
          n=n/10;
          i++;
     }
     printf("%d in octal =  %d in decimal",m,d);
     printf("\n\n\n");
	 }
void lenstr(){
	 char s[1000] ;
	 printf("Enter a string:");
	 fgets(s, sizeof(s), stdin);
 	int i;
 	for (i = 0; s[i] != '\0'; ++i);
	 printf("Length of the string: %d", i-1);
	 printf("\n\n\n");
	 }
void sqa5(){
	 int n, i,square;
     printf("Enter a number:");
     scanf("%d",&n);
     if(n<2){
         printf ("error");
     }
     else{
         printf ("squares are:");
         for(i=2;i<=n;++i){ 
             if(i%5==0){
        	     continue;
        	 }
             square=i*i;
             printf ("%d,",square);
         }
     }
     printf("\n\n\n");
	}
void addmat(){
	 int r, c, a[10][10], b[10][10], sum[10][10], i, j;
 	printf("Enter the number of rows (between 1 and 100): ");
 	scanf("%d", &r);
 	printf("Enter the number of columns (between 1 and 10): ");
 	scanf("%d", &c);
 	printf("\nEnter elements of 1st matrix:\n");
 	for (i = 0; i < r; ++i)
{
 		for (j = 0; j < c; ++j) {
 			printf("Enter element a%d%d: ", i + 1, j + 1);
 			scanf("%d", &a[i][j]);
 		}
 	}
	 printf("Enter elements of 2nd matrix:\n");
 	for (i = 0; i < r; ++i)
{
		 for (j = 0; j < c; ++j) {
 			printf("Enter element b%d%d: ", i + 1, j + 1);
 			scanf("%d", &b[i][j]);
 		}
 	}
 	for (i = 0; i < r; ++i)
{
 		for (j = 0; j < c; ++j) {
			 sum[i][j] = a[i][j] + b[i][j];
 		}
 	}
 	printf("\nSum of two matrices: \n");
	 for (i = 0; i < r; ++i)
{
 		for (j = 0; j < c; ++j) {
			 printf("%d ", sum[i][j]);
 			if (j == c - 1) {
 				printf("\n\n");
 			}
		}
	 }
	 printf("\n\n\n");
	}
int main()
{
 	int ch;
 	printf("WELCOME TO ULTIMATE C PROGRAMME\n");
 	do{
 		printf("Enter a choice\n");
 		printf(" 1.SUM OF TWO NUMBERS\n 2.MULTIPLICATION OF TWO NUMBERS\n 3.ASCII VALUE OF A CHARACTER\n 4.SWAP TWO NUMBERS USING TEMPORARY VARIABLE\n 5.SWAP TWO NUMBERS WITHOUT TEMPORARY VARIABLE\n 6.CHECK IF NUMBER IS EVEN OR ODD\n 7.CHECK IF AN ALPHABET IS VOWEL OR CONSONANT\n 8.MAX. NUMBER IN THREE NUMBERS\n 9.ROOTS OF A QUADRATIC EQUATION\n10.LEAP YEAR OR NOT\n11.NUMBER IS POSITIVE OR NEGATIVE\n12.CHARACTRR IS ALPHABET OR NOT\n13.SUM OF N NATURAL NUMBERS\n14.FACTORIAL OF A NUMBER\n15.GENERATE MULTIPLICATION TABLE\n16.DISPLAY FIBONACCI SEREIS\n17.GCD OF TWO NUMBERS\n18.LCM OF TWO NUMBERS\n19.COUNT NUMBER OF DIGITS IN AN INTEGER\n20.REVERSE A NUMBER\n21.POWER OF A NUMBER\n22.NUMBER IS PALINDROME OR NOT\n23.NUMBER IS PRIME OR NOT\n24.DISPLAY PRIME NUMBERS BETWEEN TWO NUMBERS\n25.NUMBER IS ARMSTRONG OR NOT\n26.FACTORS OF A NUMBER\n27.DISPLAY ARMSTRONG NUMBERS BETWEEN TWO NUMBERS\n28.CONVERT BINARY TO DECIMAL\n29.CONVERT OCTAL TO DECIMAL\n30.LENGTH OF A STRING\n31.SQARES OF NUMBERS EXCEPT MULTIPLES OF 5\n32.SUM OF TWO MATRICES\n33.exit\n");
 		scanf("%d",&ch);
 		switch(ch){
 			case 1: addnum();
 			break;
 			case 2: mulnum();
 			break;
 			case 3: ascii();
 			break;
 			case 4: swapvar();
 			break;
 			case 5: swapvarn();
 			break;
 			case 6: evennum();
 			break;
 			case 7: vocon();
 			break;
 			case 8: maxnum();
 			break;
 			case 9: quad();
 			break;
 			case 10: year();
 			break;
 			case 11: sign();
 			break;
 			case 12: Isalpha();
 			break;
 			case 13: nsum();
 			break;
 			case 14: nfact();
 			break;
 			case 15: table();
 			break;
 			case 16: fibo();
 			break;
 			case 17: gcd();
 			break;
 			case 18: lcm();
 			break;
 			case 19: countn();
 			break;
 			case 20: revn();
 			break;
 			case 21: power();
 			break;
 			case 22: pali();
 			break;
 			case 23: prime();
 			break;
 			case 24: primei();
 			break;
 			case 25: arm();
 			break;
 			case 26: factor();
 			break;
 			case 27: armi();
 			break;
 			case 28: bindec();
 			break;
 			case 29: octdec();
 			break;
 			case 30: lenstr();
 			break;
 			case 31: sqa5();
 			break;
 			case 32: addmat();
 			break;
 		}
 		}while(ch!=33);
 return 0;		
}
