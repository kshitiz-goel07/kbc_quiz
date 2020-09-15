#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int set1();
int set2();
int set3();
int set4();
int set5();
int cont();

int main(){
	int i,c=0,s;
	long int pz=0;
	srand(1);
    srand(time(0));
	s=rand()%6;

	switch(s){
		case 1:
			c=set1();
			break;
		case 2:
			c=set2();
			break;
		case 3:
			c=set3();
			break;
		case 4:
			c=set4();
			break;
		case 5:
			c=set5();
			break;
		
	}

	for(i=1;i<=c;i++)
		pz=pz*10+10000;
	if(pz==0)
  {
    printf("Better Luck Next Time , Buddy");
  }
  else{
	printf("Congratulations... You have won Rs. %ld",pz);
  }
  	return 0;
}

int set1(){
	char x;
	int n,c=0;
	        printf("Set - 1\n");
	        printf("Q 1. Which of the following is the primary use of analytical skills in any work environment ?\n");
	        printf("a)	To make well-informed decisions\nb)	Become more confident\nc)	To be more successful than others\nd)	Identifying trends\n");
	        printf(">");
	        scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q 2. Which among the following are correct steps to increase one's analytical approach?\n");
			printf("a)	Be observant\nb)	Master speaking skills\nc)	Think about your decisions\nd)	None of the above\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q 3. Which among the given options is not a success mantra?\n");
			printf("a)	Confidence\nb)	Logic\nc)	Procrastination\nd)	Management \n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='c')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}   
			
			printf("Q 4.  Which of these skills stated below is the most needed in the field of CSE?\n");
			printf("a)	Mathematics \nb)	Patience \nc)	Creativity \nd)	Ask questions\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}   

			printf("Q 5. State which among the given option is not an essential of analytical skills?\n");
			printf("a)	Data analysis\nb)	Hard work\nc)	Deductive reasoning\nd)	Laughter \n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}   

			printf("Q 6. Which of these is the most commonly used analytical skill used?\n");
			printf("a)	Affinity diagrams\nb)	Marketing \nc)	Brainstorming \nd)	Patience\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}   

			printf("Q 7. What is the correct order of the steps used in analytical approach to a problem?\n");
			printf("i)	Find solutions to these smaller ones\nii)	Apply concepts to join these for complete solutions \niii)	Bird-eye view to the problems\niv)	Convert larger problem into smaller ones\n");
			printf("a)	Iii) iv) i) ii)\nb)	Iii) iv) i) ii)\nc)	I) iii) iv) ii)\nd)	I) iii) iv) ii)\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}   
			
   return c;
}

int set2(){
	char x;
	int n,c=0;
			printf("Set - 2\n");
			printf("Q1. Which of the following is necessary to become successful in Life?\n");
			printf("a)	Procrastination  \nb)	Hard work \nc)	Confidence \nd)	None of the above\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q2. Pareto comes under which category among the ones stated below?\n");
			printf("a)	Analytic tools\nb)	Steps to increase analytical thinking skills\nc)	Common analytical tools\nd)	None of the above\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q3. What benefit comes to anyone who plays brains games such as chess?\n");
			printf("a)	Increases sportsmanship\nb)	Life becomes more joyful\nc)	Improves analytical skills\nd)	Increases thinking power\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='c')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}

			printf("Q4. What is the most important analytical approach to a given problem?\n");
			printf("a)	Bird-eye view to a problem \nb)	Converting a larger problem into smaller ones\nc)	Confidence \nd)	Communication \n");
			printf(">");
         scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}

			printf("Q5. Which of the following are top skills required in CSE other than programming languages?\n");
			printf("a)	laughter \nb)	Mathematics \nc)	Management \nd)	none of the above\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q6. What is SWOT analysis?\n");
			printf("a)	It is a commonly analytical tool \nb)	It is a success mantra in life\nc)	It a one of the top 8 skills required in CSE \nd)	Analytical skill\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q7. Why is creativity an Essential of analytical skills?\n");
			printf("a)	Without it solving problems would be very difficult\nb)	Because creative people tends to have good analytical approach\nc)	It makes you a better problem solver\nd)	None of the above\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			

return c;  
}

int set3(){
			printf("Set - 3\n");
			char x;
			int n,c=0;
			printf("Q1. Which among the following is the first and last step in an analytical approach to problem solving?\n");
			printf("a)	Converting larger problem into smaller ones\nb)	Bird-eye view to the problem\nc)	Applying concepts to join these for complete solution\nd)	Find solutions of smaller problems\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q2. Which among the following are not commonly used analytical skills?\n");
			printf("a)	Five forces framework\nb)	Data analysis\nc)	7-S framework\nd)	Research\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q3. Which of the given options can help you increase your analytical approach power?\n");
			printf("a)	Think about your decisions \nb)	Laughter \nc)	Management \nd)	Practice your problem solving skills\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q4. State the correct Essentials of analytical skills among the following?\n");
			printf("a)	Hardware \nb)	Creativity \nc)	Pareto\nd)	Data analysis\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q5. Skills required in CSE jobs ?\n");
			printf("a) Laughter \nb) Hardware \nc)Research \nd)Patience\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q6. Important Steps to improve analytical skills ?\n");
			printf("a) Ask questions \nb) Creativity \nc) Read books \nd) fishbone diagram\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q7. Select some common analytical tools ?\n");
			printf("a) Identifying trends \nb)Brainstorming \nc)pareto \nd) Management\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
return c;
}
	
int set4(){
			printf("Set - 4\n");
			char x;
			int n,c=0;
			
			printf("Q1. list some of the analytical skills ?\n");
			printf("a) communication \nb) Bird-eye-view \nc)Issue-tree \nd)Data-analysis\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q2. what would be the steps you would follow to improve analytical thinking ?\n");
			printf("a) Process mapping \nb)Play brain games c)Data analysis \nd) Think about your decision\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q3. Select success tips from this option ?\n");
			printf("a) Logic \nb)Communication \nc) Confidence \nd) force-field\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q4. Talent that will help you in getting CSE jobs ?\n");
			printf("a) Well decision \nb)programming languages \nc)Troubleshooting \nd)solving complex problems\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q5. select some of the basic skill that are required at work ?\n");
			printf("a) Executing projects \nb)apply concepts \nc) respect d) gathering information\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q6. Tools which will help you in analytical thinking?\n");
			printf("a) Bird-eye-view \nb) BE observant \nc)Find solution \nd) Learn how thing work\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}

			printf("Q7. Choose some analytical approch steps ?\n");
			printf("a) Apply concepts \nb) Creativity \nc)Bird-eye-view \nd) Streaming process\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
						
			
return c;
}

int set5(){
			printf("Set - 5\n");
			char x;
			int n,c=0;
			
			printf("Q1. what are some of the essential analytical skills ?\n");
			printf("a) Management \nb)Data - analysis \nc)research \nd)Be observant\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q2. which of the success mantras are correct in analytical approch to logic building?\n");
			printf("a) Laughter \nb)marketing \nc)Confidence \nd)competition\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}

			printf("Q3. select some of the main analytical tools ?\n");
			printf("a)ask questions  \nb)affinity diagram  \nc)logic \nd)five force framework\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q4. Which among the following is not a sucess mantra ?\n");
			printf("a) logic \nb)confidence \nc)mathematics \nd)pareto\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q5. What is the second and third steps in analytical approch to problem solving ?\n");
			printf("a)apply concepts \nb)data-analysis \nc)larger problem to smaller problem\nd)find solution to these smaller one\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='c')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}

			printf("Q6. which among the following are analytical tools commonly used by people ?\n");
			printf("a)confidence \nb)scatter diagram \nc)issue tree \nd)laughter\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='b')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			printf("Q7. state the incorrect methods to improve analytical thinking skills ?\n");
			printf("a)issue tree \nb)fishbone diagram \nc)ask question  \nd)play brain games\n");
			printf(">");
			scanf(" %c",&x);
	        if(x=='a')
	        c+=1;
	        else
	        return c;
	        n=cont();
	        if(n==0){
	        	return c;
			}
			
			
return c;
}

int cont(){
	char ch;
	int i=1;
	printf("Do you wish to continue playing ?\n");
	printf("Press Y for Yes\nPress N for No\n");
	printf(">");
	while(i){
	scanf(" %c",&ch);
	if(ch=='Y' || ch=='y')
	return 1;
	else if(ch=='N' || ch=='n')
	return 0;
	
}
	
}
