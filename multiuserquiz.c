#include<math.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
typedef struct student_details
{
	char name[50];
	int age;
	int  count;//score
	int count1;//correct ques
}student;
int nos;int c,c1;
int START(student s[nos],int i);
//Questions function declaration
int easy_q1(student s[nos],int i);
int medium_q1(student s[nos],int i);
int hard_q1(student s[nos],int i);
int easy_q2(student s[nos],int i);
int medium_q2(student s[nos],int i);
int hard_q2(student s[nos],int i);
int easy_q3(student s[nos],int i);
int medium_q3(student s[nos],int i);
int hard_q3(student s[nos],int i);
int easy_q4(student s[nos],int i);
int medium_q4(student s[nos],int i);
int hard_q4(student s[nos],int i);
int easy_q5(student s[nos],int i);
int medium_q5(student s[nos],int i);
int hard_q5(student s[nos],int i);
int easy_q6(student s[nos],int i);
int medium_q6(student s[nos],int i);
int hard_q6(student s[nos],int i);
int easy_q7(student s[nos],int i);
int medium_q7(student s[nos],int i);
int hard_q7(student s[nos],int i);
int easy_q8(student s[nos],int i);
int medium_q8(student s[nos],int i);
int hard_q8(student s[nos],int i);
int easy_q9(student s[nos],int i);
int medium_q9(student s[nos],int i);
int hard_q9(student s[nos],int i);
int easy_q10(student s[nos],int i);
int medium_q10(student s[nos],int i);
int hard_q10(student s[nos],int i);
int easy_q11(student s[nos],int i);
int medium_q11(student s[nos],int i);
int hard_q11(student s[nos],int i);
int easy_q12(student s[nos],int i);
int medium_q12(student s[nos],int i);
int hard_q12(student s[nos],int i);
int easy_q13(student s[nos],int i);
int medium_q13(student s[nos],int i);
int hard_q13(student s[nos],int i);
int easy_q14(student s[nos],int i);
int medium_q14(student s[nos],int i);
int hard_q14(student s[nos],int i);
int easy_q15(student s[nos],int i);
int medium_q15(student s[nos],int i);
int hard_q15(student s[nos],int i);
int easy_q16(student s[nos],int i);
int medium_q16(student s[nos],int i);
int hard_q16(student s[nos],int i);
int easy_q17(student s[nos],int i);
int medium_q17(student s[nos],int i);
int hard_q17(student s[nos],int i);
int easy_q18(student s[nos],int i);
int medium_q18(student s[nos],int i);
int hard_q18(student s[nos],int i);
int easy_q19(student s[nos],int i);
int medium_q19(student s[nos],int i);
int hard_q19(student s[nos],int i);
int result(int a);
int choose(student s[nos],int i);
int o;
char ans;
clock_t start;clock_t end;
//int s[i].count=0;
//int s[i].count1=0;
double duration;

int main()
{

//int age;
//char name[50];


printf("Enter the number of students:\n");
scanf("%d",&nos);
student s[nos];
for(int i=0;i<nos;i++)
{
c=0;
c1=0;


printf("Enter your name(student %d):\n",i+1);
scanf("%s",s[i].name);
printf("Enter your age(student %d):\n",i+1);
scanf("%d",&s[i].age);
printf("Let us begin:\n");
START(&s[nos],i);
choose(&s[nos],i);
s[i].count=c1;
s[i].count1=c;

}
for(int i=0;i<nos;i++)
{
printf("\t\tPROGRESS REPORT\n");
printf("Name(student %d):%s\n",i+1,s[i].name);
printf("Age(student %d):%d\n",i+1,s[i].age);
printf("You have correctly answered %d Questions\n",s[i].count1);
printf("Your score is:%d\n",s[i].count);
o=s[i].count;
result(o);
}
}

// Grade declaration
int result(int a)
{


if(a>90)
{	
printf("grade:S\n");	
}
else if(a>=80 && a<90)
{	
printf("grade:A\n");	
}
else if(a>=70 && a<80)
{	
printf("grade:B\n");	
}
else if(a>=60 && a<70)
{	
printf("grade:C\n");	
}
else if(a>=50 && a<60)
{	
printf("grade:D\n");	
}
else if(a>=40 && a<50)
{	
printf("grade:E\n");	
}
else 
{	
printf("grade:F\n");	
}
return 0;
}
// function for time duration 
int START(student s[nos],int i)
{

start=clock();
printf("1.Name the biggest church in the world:\n");
printf("A.St Peter Basilica\nB.St Marys\nC.Bom jesus church\nD.Holy spirit church\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='A'||ans=='a')
{
(s[i].count)+=5;
(s[i].count1)+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is A.St Peter Basilica\n");
}
return duration;
}

// to choose the question based on user's ability to answer a question
int choose(student s[nos],int i)
{
if(duration>60)
{
easy_q1(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q1(&s[nos],i);
}
else 
{
hard_q1(&s[nos],i);
}
//QUESTION 3
if(duration>60)
{
easy_q2(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q2(&s[nos],i);
}
else 
{
hard_q2(&s[nos],i);
}
//QUESTION 4
if(duration>60)
{
easy_q3(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q3(&s[nos],i);
}
else 
{
hard_q3(&s[nos],i);
}
//QUESTION 5
if(duration>60)
{
easy_q4(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q4(&s[nos],i);
}
else 
{
hard_q4(&s[nos],i);
}
//QUESTION 6
if(duration>60)
{
easy_q5(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q5(&s[nos],i);
}
else 
{
hard_q5(&s[nos],i);
}
//Question 7
if(duration>60)
{
easy_q6(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q6(&s[nos],i);
}
else 
{
hard_q6(&s[nos],i);
}
//Question 8
if(duration>60)
{
easy_q7(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q7(&s[nos],i);
}
else 
{
hard_q7(&s[nos],i);
}
//Question 9
if(duration>60)
{
easy_q8(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q8(&s[nos],i);
}
else 
{
hard_q8(&s[nos],i);
}
//Question 10
if(duration>60)
{
easy_q9(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q9(&s[nos],i);
}
else 
{
hard_q9(&s[nos],i);
}
//Question 11
if(duration>60)
{
easy_q10(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q10(&s[nos],i);
}
else 
{
hard_q10(&s[nos],i);
}
//Question 12
if(duration>60)
{
easy_q11(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q11(&s[nos],i);
}
else 
{
hard_q11(&s[nos],i);
}
//Question 13
if(duration>60)
{
easy_q12(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q12(&s[nos],i);
}
else 
{
hard_q12(&s[nos],i);
}
//Question 14
if(duration>60)
{
easy_q13(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q13(&s[nos],i);
}
else 
{
hard_q13(&s[nos],i);
}
//Question 15
if(duration>60)
{
easy_q14(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q14(&s[nos],i);
}
else 
{
hard_q14(&s[nos],i);
}
//Question 16
if(duration>60)
{
easy_q15(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q15(&s[nos],i);
}
else 
{
hard_q15(&s[nos],i);
}
//Question 17
if(duration>60)
{
easy_q16(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q16(&s[nos],i);
}
else 
{
hard_q16(&s[nos],i);
}
//Question 18
if(duration>60)
{
easy_q17(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q17(&s[nos],i);
}
else 
{
hard_q17(&s[nos],i);
}
//Question 19
if(duration>60)
{
easy_q18(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q18(&s[nos],i);
}
else 
{
hard_q18(&s[nos],i);
}
//Question 20
if(duration>60)
{
easy_q19(&s[nos],i);
}
else if(duration>30 && duration<=60)
{
medium_q19(&s[nos],i);
}
else 
{
hard_q19(&s[nos],i);
}
}

int easy_q1(student s[nos],int i)
{
start=clock();
printf("2.Name the largest s[i].country:\n");
printf("A.Russia\nB.India\nC.USA\nD.Brazil\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='A'||ans=='a')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;

}
else 
{
printf("Wrong answer..\n");
printf("correct answer is A.Russia\n");
}
return duration;
}
// function for to ask question to user
int medium_q1(student s[nos],int i)
{
start=clock();
printf("2.Name our galaxy:\n");
printf("A.Milky way\nB.Andromedia\nC.M20\nD.M21\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='A'||ans=='a')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is A.Milky way\n");
}
return duration;
}
int hard_q1(student s[nos],int i)
{
start=clock();
printf("2.Name the largest national park:\n");
printf("A.Yellow stone national park\nB.Bannerghatta national park\nC.Khaziranga\nD.Nagarhole\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='A'||ans=='a')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is A.Yellow stone national park\n");
}
return duration;
}
int easy_q2(student s[nos],int i)
{
start=clock();
printf("3.Who is the first chairman of ISRO?\n");
printf("A. Mylswamy Annadurai\nB.B. N. Suresh\nC.Vikram Sarabhai\nD.None of these\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='C'||ans=='c')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is A.St Peter Basilica\n");
}
return duration;
}
int medium_q2(student s[nos],int i)
{
start=clock();
printf("3.What is full form of J2ee?:\n");
printf("A.Java 2 Enterprise Edition\nB.Java 2 Entertainment Edition\nC.Java 2 8 Edition\nD.None\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='A'||ans=='a')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is A.Java \n");
}
return duration;
}
int hard_q2(student s[nos],int i)
{
start=clock();
printf("3.Motorolla hq in?:\n");
printf("A.US\nIndia\nC.Africa\nD.Asia\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='A'||ans=='a')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is A.US\n");
}
return duration;
}
int easy_q3(student s[nos],int i)
{
start=clock();
printf("4.Who is the founder of microsoft :\n");
printf("A.raman\nB.henry\nC.gates\nD.Milan");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='C'||ans=='c')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is C.gates\n");
}
return duration;
}
int medium_q3(student s[nos],int i)
{
start=clock();
printf("4.who is the founder of oracle:\n");
printf("A.lamd\nB.ellision\nC.karter\nD.robin");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='B'||ans=='b')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is B.ellision\n");
}
return duration;
}
int hard_q3(student s[nos],int i)
{
start=clock();
printf("4.who is the founder of apple\n");
printf("A.steve\nB.jackson\nC.phil\nD.henry\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='A'||ans=='a')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;

}
else 
{
printf("Wrong answer..\n");
printf("correct answer is A.steve\n");
}

return duration;
}
int easy_q4(student s[nos],int i)
{
start=clock();
printf("5.who is the father of CS\n");
printf("A.charles cabbage\nB.charcles babbage\ntomato finger\nD.raman\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='B'||ans=='b')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is B.charcles babbage\n");
}
return duration;
}
int medium_q4(student s[nos],int i)
{
start=clock();
printf("5.IBM full form\n");
printf("A.international bureun machines\nB.international business machine\nC.international bisiness management\nD.industry business model\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='B'||ans=='b')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is B.international business machine\n");
}
return duration;
}
int hard_q4(student s[nos],int i)
{
start=clock();
printf("5.PERL is a which type of language?:\n");
printf("A.Assembly level\nB.Low level\nC.High level\nD.Hybrid level\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='C'||ans=='c')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is C.High level\n");
}
return duration;
}
int easy_q5(student s[nos],int i)
{
start=clock();
printf("6.Silicon city of India:\n");
printf("A.Pune\nB.Hyderabad\nC.Bangalore\nD.Chennai\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='C'||ans=='c')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is C.Bangalore\n");
}
return duration;
}
int medium_q5(student s[nos],int i)
{
start=clock();
printf("6.Windows? :\n");
printf("A.Google\nB.Microsoft\nC.Apple\nD.Sun\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='B'||ans=='b')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is B.Microsoft\n");
}
return duration;
}
int hard_q5(student s[nos],int i)
{
start=clock();
printf("6.Dell Manufactures:\n");
printf("A.Hardware\nB.Software\nC.Both\nD.None\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='B'||ans=='b')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is B.Software\n");
}
return duration;
}

int easy_q6(student s[nos],int i)
{
start=clock();
printf("7.which is the national language of india ?\n");
printf("A.Telugu\nB.kannada\nC.Hindi\nD.malayalam\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='C'||ans=='c')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is C.Hindi\n");
}
return duration;
}
int medium_q6(student s[nos],int i)
{
start=clock();
printf("7.Who is the CEO of Twitter ?:\n");
printf("A.jackson\nB.Bilgates\nC.Sundar Pichai\nD.Jcak Dorsey\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='D'||ans=='d')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is D.Jcak Dorsey\n");
}
return duration;
}
int hard_q6(student s[nos],int i)
{
start=clock();
printf("7.what is computer smallest information storage unit ?:\n");
printf("A.KiloByte(KB)\nB.MegaByte(MB)\nC.Byte\nD.Bite\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='D'||ans=='d')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer.\n.");
printf("correct answer is D.Bite\n");
}
return duration;
}

int easy_q7(student s[nos],int i)
{
start=clock();
printf("8.What is the full form of ISRO ?\n");
printf("A.Indian science and research organization\nB.Indian study and research athority\nC. International science and research institute na\nD.Indian space research organization\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='D'||ans=='d')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is D.Indian space research organization\n");
}
return duration;
}
int medium_q7(student s[nos],int i)
{
start=clock();
printf("8.Which is India's first experimental satellite launch vehicle?\n");
printf("A. ASLV\nB.GSLV\nC. SLV 3\nD.None of these\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='C'||ans=='c')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is C. SLV 3\n");
}
return duration;
}
int hard_q7(student s[nos],int i)
{
start=clock();
printf("8.Which type of fuel is used by GSLV in its operations?\n");
printf("A.Only solid fuel\nB.Only liquid fuel\nC.Liquid in first stage and solid in second stage\nD.Solid in first stage and liquid in second stage\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='D'||ans=='d')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is D. Solid in first stage and liquid in second stage\n");
}
return duration;
}

int easy_q8(student s[nos],int i)
{
start=clock();
printf("9.What was the Chandrayan I……..\n");
printf("A.An earth observation satellite\nB. Lunar Probe\nC. Lunar Probe\nD.Geo stationary satellite\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='B'||ans=='b')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is B. Lunar Probe\n");
}
return duration;
}
int medium_q8(student s[nos],int i)
{
start=clock();
printf("9.Satish Dhawan Space Centre (SDSC), SHAR is situated at…….\n");
printf("A. Bangaluru\nB. Mahendragiri\nC.Ahmedabad\nD.Sriharikota\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='D'||ans=='d')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is D.Sriharikota\n");
}
return duration;
}
int hard_q8(student s[nos],int i)
{
start=clock();
printf("9.Who was the india’s first man/women in the space?\n");
printf("A.Rajesh Sharma\nB.Rakesh sharma\nC. Kalpana chawla\nD. Sunita williams\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='B'||ans=='b')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is B.Rakesh sharma\n");
}
return duration;
}
int easy_q9(student s[nos],int i)
{
start=clock();
printf("10.IRNSS is a ……………..\n");
printf("A.Navigation satellite\nB. Space mission\nC. MARS mission\nD. Geo stationary satellite\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='A'||ans=='a')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is A.Navigation satellite\n");
}
return duration;
}
int medium_q9(student s[nos],int i)
{
start=clock();
printf("10.Where is the Headquarter of ISRO?\n");
printf("A. Chandipur\nB.Bengaluru\nC. Mahendragiri\nD.Chennai\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='C'||ans=='c')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is C. Mahendragiri\n");
}
return duration;
}
int hard_q9(student s[nos],int i)
{
start=clock();
printf("10.When The Indian Space Research Organisation (ISRO) was set up?\n");
printf("A.1962\nB.1969\nC.1972\nD.1952\n");
scanf(" %c",&ans);
end=clock();
duration =((double)end-start)/CLOCKS_PER_SEC;
if(ans=='B'||ans=='b')
{
s[i].count+=5;
s[i].count1+=1;
c+=1;
c1+=5;
}
else 
{
printf("Wrong answer..\n");
printf("correct answer is B.1969\n");
}
return duration;
}
int easy_q10(student s[nos],int i)
{
              start=clock();
              printf("11.Which of the following is the first calculating device?\n");
              printf("A.Abacus\nB.Calculator\nC.Turing machine\nD.Pascaline\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='A'||ans=='a')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is A.\n");
              }
              return duration;
}
int medium_q10(student s[nos],int i)
{
              start=clock();
              printf("11.Who invented mechanical calculator called Pascaline?\n");
              printf("A.Charles Babbage\nB.Blaise Pascal\nC.Alan Turing\nD.Lee De Forest\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='B'||ans=='b')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is B.\n");
              }
              return duration;
}
int hard_q10(student s[nos],int i)
{
              start=clock();
              printf("11.Who among the following considered as the 'father of artificial intelligence'?\n");
              printf("A.Charles Babbage\nB.Lee De Forest\nC.John McCarthy\nD.JP Eckert\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='C'||ans=='c')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is C.\n");
              }
              return duration;
}
int easy_q11(student s[nos],int i)
{
              start=clock();
              printf("12.Which was the world's first successful electronic computer?:\n");
              printf("A.PARAM\nB.CRAY-1\nC.Pascaline\nD.ENIAC electronic Numerical Integrator and computer\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='D'||ans=='d')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is D.\n");
              }
              return duration;
}
int medium_q11(student s[nos],int i)
{
              start=clock();
              printf("12.Who among the following used the term computer worm for the first time?:\n");
              printf("A.John Brunner\nB.Alan Turing\nC.John McCarthy\nD.JP Eckert\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='A'||ans=='a')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is A.\n");
              }
              return duration;
}
int hard_q11(student s[nos],int i)
{
              start=clock();
              printf("12.Which was first virus detected on ARPANET, the forerunner of the internet in the early 1970s?:\n");
              printf("A.Exe Flie\nB.Creeper Virus\nC.Peeper Virus\nD.Trozen horse\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='B'||ans=='b')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is B.\n");
              }
              return duration;
}
int easy_q12(student s[nos],int i)
{
              start=clock();
              printf("13.Find out the correct definition of Wide Area Network (WAN)?:\n");
              printf("A.It is a programming language with strong abstraction from the details of the computer.\nB.It is a collection of computers interconnected with each other through cables to share their data, information and other common hardware resources\nC.A computer network that covers a broad area (i.e., any network, whose communications links cross metropolitan, regional or national boundaries).\nD.A  computer network covering a small physical area like a home, office or small groups of buildings, such as a school or an airport.\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='C'||ans=='c')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is C.\n");
              }
              return duration;
}
int medium_q12(student s[nos],int i)
{
              start=clock();
              printf("13.Select the example of application software of computer:\n");
              printf("A.MS Word\nB.MS Excel\nC.Both\nD.None\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='C'||ans=='c')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is C.\n");
              }
              return duration;
}
int hard_q12(student s[nos],int i)
{
              start=clock();
              printf("13.Which of the following is also called translator?:\n");
              printf("A.Data representation\nB.MS-DOS\nC.Operating System\nD.Language Processor\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='D'||ans=='d')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is D.\n");
              }
              return duration;
}
int easy_q13(student s[nos],int i)
{
              start=clock();
              printf("14.How the quality of printer is measured?:\n");
              printf("A.Alphabet per strike\nB.Words per Inch\nC.Strike per Inch\nD.Dots per Inch\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='D'||ans=='d')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is D.\n");
              }
              return duration;
}
int medium_q13(student s[nos],int i)
{
              start=clock();
              printf("14.The first news paper in the world was started by ?:\n");
              printf("A.India\nB.USA\nC.Japan\nD.China\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='D'||ans=='d')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is D.\n");
              }
              return duration;
}
int hard_q13(student s[nos],int i)
{
              start=clock();
              printf("14.Who is known as Man of Blood and Iron ?:\n");
              printf("A.Napoleon\nB.Bismarck\nC.Ho Chi Minh\nD.Sir Walter Scott\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='B'||ans=='b')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is B.\n");
              }
              return duration;
}
int easy_q14(student s[nos],int i)
{
              start=clock();
              printf("15.Which is considered as oldest civilization of the world ?:\n");
              printf("A.Mesopotamian Civilization\nB.Harappan Civilization\nC.Chinese Civilization\nD.Egyptain Civilization\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='A'||ans=='a')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is A.\n");
              }
              return duration;
}
int medium_q14(student s[nos],int i)
{
              start=clock();
              printf("15.Who is considered as the master of Greek comedy?:\n");
              printf("A.Aeschylus\nB.Sophocles\nC.Aristophanes\nD.Philip\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='C'||ans=='c')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is C.\n");
              }
              return duration;
}
int hard_q14(student s[nos],int i)
{
              start=clock();
              printf("15.Young Italy movement by led by two revolutionaries, One was Mazzini and Other was ?:\n");
              printf("A.Garibaldi\nB.Victor\nC.Emmanuel\nD.Louis\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='A'||ans=='a')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is A.\n");
              }
              return duration;
}
int easy_q15(student s[nos],int i)
{
              start=clock();
              printf("16.Which among following is called Gift of the Nile ?:\n");
              printf("A.Egypt\nB.Iran\nC.Kenya\nD.South Africa\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='A'||ans=='a')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is A.\n");
              }
              return duration;
}
int medium_q15(student s[nos],int i)
{
              start=clock();
              printf("16.In which country Aztec civilization was originated ?:\n");
              printf("A.Brazil\nB.Mexico\nC.Greece\nD.Egypt\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='B'||ans=='b')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is B.\n");
              }
              return duration;
}
int hard_q15(student s[nos],int i)
{
              start=clock();
              printf("16.Which of these was an action of Farmers Alliances?:\n");
              printf("A.Involving farmers in political action\nB. Encouraging farmers to give up farming\nC. Helping farmers fight for better prices\nD.Both A and C\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='D'||ans=='d')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is D.\n");
              }
              return duration;
}
int easy_q16(student s[nos],int i)
{
              start=clock();
              printf("17.During Kargil War, Who was the Indian Army chief of staff ?:\n");
              printf("A.Ved Prakash Malik\nB.Sankar Roy Chowdary\nC.Nirmal chandar Vij\nD.Sundar rajan Padmanabhan\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='A'||ans=='a')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is A.\n");
              }
              return duration;
}
int medium_q16(student s[nos],int i)
{
              start=clock();
              printf("17.Who was the modern world's first woman head of government ?:\n");
              printf("A.Indira Gandhi\nB.Sirimao Bandaru nayake\nC.Isabel Peron\nD.Golda Mayor\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='B'||ans=='b')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is B.\n");
              }
              return duration;
}
int hard_q16(student s[nos],int i)
{
              start=clock();
              printf("17.The oldest dynasty still ruling in which country   ?:\n");
              printf("A.England\nB.Japan\nC.India\nD.Italy\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='B'||ans=='b')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is B.\n");
              }
              return duration;
}
int easy_q17(student s[nos],int i)
{
              start=clock();
              printf("18.Which political party used to have swastik symbol ?:\n");
              printf("A.Communist Party of Chaina\nB.Republican Party, USA\nC.National Socialist Party, Germany\nD.Liberal Democratic Party of Japan\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='C'||ans=='c')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is C.\n");
              }
              return duration;
}
int medium_q17(student s[nos],int i)
{
              start=clock();
              printf("18.Which of the following tribes does not share its name to a mountain peak ?:\n");
              printf("A.Bheel\nB.Khasi\nC.Jaintia\nD.Gaaro\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='A'||ans=='a')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is A.\n");
              }
              return duration;
}
int hard_q17(student s[nos],int i)
{
              start=clock();
              printf("18.Who is the First Test Tube Twins Babies in the World?:\n");
              printf("A.Louise Brown & Vesli Multinder\nB.Stephan & Amanda\nC.Harsha & Indhira\nD.Elizabeth Car & Carl Wood\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='B'||ans=='b')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is B.\n");
              }
              return duration;
}
int easy_q18(student s[nos],int i)
{
              start=clock();
              printf("19.What was the name of the atom bomb dropped by USA on Hiroshima in Japan during the second world war ?:\n");
              printf("A.Little Boy\nB.Little Fly\nC.Little Devil\nD.None of these\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='A'||ans=='a')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is A.\n");
              }
              return duration;
}
int medium_q18(student s[nos],int i)
{
              start=clock();
              printf("19.Who was among the famous Roman poets ?:\n");
              printf("A.Tacitus\nB.Plinky\nC.Virgil\nD.Marcus\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='C'||ans=='c')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is C.\n");
              }
              return duration;
}
int hard_q18(student s[nos],int i)
{
              start=clock();
              printf("19.When did the first Railway Train begin to carry passengers and freight?:\n");
              printf("A.1814 AD\nB.1830 AD\nC.1853 AD\nD.1884 AD\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='b'||ans=='B')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is B.\n");
              }
              return duration;
}
int easy_q19(student s[nos],int i)
{
              start=clock();
              printf("20.Who said that Man is a political animal?:\n");
              printf("A.Aristotle\nB.Karl Marx\nC.Lenin\nD.Plato\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='A'||ans=='a')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is A.\n");
              }
              return duration;
}
int medium_q19(student s[nos],int i)
{
              start=clock();
              printf("20.Which of the following city has highest historical monuments?:\n");
              printf("A.Delhi\nB.Bangalore\nC.Hyderabad\nD.Chennai\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='A'||ans=='a')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is A.\n");
              }
              return duration;
}
int hard_q19(student s[nos],int i)
{
              start=clock();
              printf("20.Whose winter residence did potala palace serve as till 1959 ?  :\n");
              printf("A.Jodhpur Maharaj\nB.Dalai lama\nC.Pope\nD.Nepal Raju\n");
              scanf(" %c",&ans);
              end=clock();
              duration =((double)end-start)/CLOCKS_PER_SEC;
              if(ans=='B'||ans=='b')
              {
                           s[i].count+=5;
                           s[i].count1+=1;
c+=1;
c1+=5;
              }
              else
              {
                           printf("Wrong answer..\n");
                           printf("correct answer is B.\n");
              }
              return duration;
}

//end of program