#include<iostream.h>
#include<conio.h>
      void opt1();
      void opt2();
      void opt3();
void main()
{
 clrscr();
  int ch;
    textcolor(YELLOW+BLINK);
    textbackground(GREEN);
    gotoxy(10,3);
      cprintf("WELCOME TO APPTITUTE TEST ZONE");
      textcolor(YELLOW);
      textbackground(BLACK);
  gotoxy(10,8);
  cprintf("PRESS 1. GENERAL KNOWLEGE TEST ");
  gotoxy(10,10);
  cprintf("PRESS 2. APTITUDE TEST\n");

  gotoxy(10,12);
  cprintf("PRESS 3. ENGLISH QUIZ ");
  gotoxy(10,14);
  cprintf("NOW ENTER CHOICE ");
  cin>>ch;
  switch(ch)
  {
  case 1:

      opt1();
      break;
      case 2:
	 opt2();
	 break;
       case 3:
      opt3();
      break;
      default:
       gotoxy(10,16);
	  cprintf("NO TEST EXISTS ");
    }
	getch();
}
void opt1()
{
	clrscr();
	int x;//,y,z;
	x=0;//y=z=0;
	char ch1[100],ch2;//,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
	    textcolor(YELLOW);

	cprintf("\n\n\n		Guest Enter Your Name\n\n");
	cin>>ch1;
	clrscr();
	textcolor(YELLOW+BLINK);
	cprintf("		\n\nWelcome  ");
		 cout<<"         \n"<<ch1;
	textcolor(YELLOW);
	cprintf("    \n\n Welcome to QUIZ SHOW   All the Best !!!!\n ");
	cout<<"  \n\n Enter answer in form of  'a'  ,  'b'  and  'c'   only.";

	cout<<" \n\n       Saka Era was founded by ? \n \n a.  Pulakesin-II  b.  Kanishka c.  Harsha     ";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<" \n \n Good Job. Your score is-> "<<x;
	}
	else
	cout<<"\n \n Sorry wrong answer.";

	getch();
	clrscr();

	cout<<"   \n\n  The capital city of the Pallavas was  ?  \n\n a.  Nepal  b. Kanchipuram  c. Madurai      ";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"\n\n Good Job.Your score is ->"<<x;
	}
	else
	cout<<"\n\nSorry wrong answer.";
	getch();
	clrscr();

	cout<<"   \n\n  What is called as ' THE LAND OF RISING SUN'?  \n \n a.  Chicago  b.  Japan  c. Tibet     ";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"\n \n Good Job.Your score is-> "<<x;
	}
	else
	cout<<"\n\n Sorry wrong answer.";
	getch();
	clrscr();

	cout<<"   \n\n Computer follows a simple principle called GIGO which means: ? \n\n   a.  Garbage in garbage out  b.  Garbage input good output  c.  Good input good output";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"\n\n Your score is-> "<<x;


	}
	else
	cout<<"\n\n Sorry wrong answer.";
	getch();
	clrscr();

	cout<<"   \n\n  Name the process of production of energy in the Sun?\n\n  a.  Radioactivity b. Nuclear fission c. Nuclear fusion    ";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"\n \nYour score is-> "<<x;
			}
	else
	cout<<"\n\nSorry wrong answer.";
	getch();
	clrscr();

	cout<<"	\n\n Who invented the ball-point pen: ?   \n\n a. Lazzlo Biro  b.  Curie c. Newton    ";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"\n\nYour score is-> "<<x;


	}
	else
	cout<<"\n\n Sorry wrong answer.";
	getch();
	clrscr();

	cout<<" \n\n  Who recently created 15 sixes record in ODI series? \n\n a. Shane Watson  b. M.S.Dhoni c. Herschelle Gibbs    ";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"\n\n Your score is-> "<<x;
	}
	else
	cout<<"\n\n Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"   \n\n  What is called as ' THE LAND OF WHITE ELEPHANTS'?  \n\n a.  Bangladesh  b.Thailand  c.India    ";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<" \n\n Your score is-> "<<x;


	}
	else
	cout<<"\n\nSorry wrong answer.";
	getch();
	clrscr();

	cout<<"\n\n  Which of the following is not correctly matched? \n\n  a. Bhangra-Punjab b. Bihu-Nagaland  c. Garba-Gujarat     ";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"\n\n Your score is-> "<<x;


	}
	else
	cout<<"\n\nSorry wrong answer.";
	getch();
	clrscr();

	cout<<"     \n\n   The metal constituent of chlorophyll is ? \n \n   a.  Potassium  b. Iron c. Magnesium     ";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"\n\n Your score is-> "<<x;

	}
	else
	cout<<"\n\nSorry wrong answer.";
	getch();
	clrscr();
	if(x==100)
	cout<<"\n\n  No cheating...... You have done this earlier also.\n ";
	if(x==90)
	cout<<"\n \n You are extremely intelligent Your Score is 90";
	if(x==80)
	cout<<"\n \n You are intelligent Your Score is 80";
	if(50==x||x==70||x==60)
	cout<<"\n \n You are average     Your Score is \n"<<x<<"\n \nBetter luck nexttime\n ";
	else if(x<=40)
	cout<<"\n\n No use........ Not even 5 questions right\n\n";
}
void opt2()
{
	clrscr();
	int x=0;

	char ch1[100],ch2;//,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
	cout<<"\n\n\n GUEST Enter your name: \n\n";
	cin>>ch1;
	getch();
	cprintf("\n\n\t\t\t\tWELCOME");
	cout<<"\n\n\t\t\t\t\t"<<ch1;
	cout<<"\n\n";
	cout<<"Welcome to the quiz. All the Best. May you come out with flying colors.\n";
	cout<<"\n\nEnter answer in the form of a,b,c,d only.\n";
	getch();
	clrscr();
	cout<<"\n\n\t\tQuestion 1:\nIf r=5z then 15z=3y, then r=?\n\n" ;
	cout<<"\n\t(a)y\n\t(b)2y\n\t(c)5y\n\t(d)10y\n";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"\n\nGood job. Your score is "<<x;
	}
	else
	{
		cout<<"\n\nSorry wrong answer.";
	}
	getch();
	clrscr();
	cout<<"\n\n\t\tQuestion 2:\nWhat is 35% of a number if 12 is 15% of a number?\n\n" ;
	cout<<"\n\n\t(a)5\n\t(b)12\n\t(c)28\n\t(d)33\n";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"\n\nGood job. Your score is "<<x;
	}
	else
	{
		cout<<"\n\nSorry wrong choice.";
	}
	getch();
	clrscr();
	cout<<"\n\n\t\tQuestion 3:\nIf 8x+5x+2x+4x=114, then 5x+3=?\n\n";
	cout<<"\n\n\t(a)12\n\t(b)25\n\t(c)33\n\t(d)47\n";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"\n\nGood going. Your score is "<<x;
	}
	else
	{
		cout<<"\n\nOops. You went wrong. Good Luck for the next question.";
	}
	getch();
	clrscr();
	cout<<"\n\n\t\tQuestion 4:\nThe sum of ages of 5 children born at the intervals of 3 years each is 50 years. What is the age of the youngest child?\n\n";
	cout<<"\n\n\t(a)4 yrs\n\t(b)8 yrs\n\t(c)10 yrs\n\t(d)None of these.\n";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"\n\nYour score is "<<x<<" Congrats. :)";
	}
	else
	{
		cout<<"\n\nLooks like you went wrong somewhere. Wrong answer!";
	}
	getch();
	clrscr();
	cout<<"\n\n\t\tQuestion 5:\nA vendor bought toffees at 6 for a rupee. How many a rupee must he sell to gain a profit of 20%?\n\n";
	cout<<"\n\n\t(a)3\n\t(b)4\n\t(c)5\n\t(d)6\n";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"\n\nCongo. Your score is "<<x;
	}
	else
	{
		cout<<"\n\nYou are wrong.";
	}
	getch();
	clrscr();
	cout<<"\n\n\t\tQuestion 6:\nA is thrice as good as B and finishes a job in 60 days less than B. Working together they can do it in?\n\n";
	cout<<"\n\n\t(a)20 days\n\t(b)22.5 days\n\t(c)25 days\n\t(d)30 days\n";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"\n\nYou are right. Your score is "<<x;
	}
	else
	{
		cout<<"\n\nSomething went wrong. Sorry. Wrong choice.";
	}
	getch();
	clrscr();
	cout<<"\n\n\t\tQuestion 7:\nA person crosses a 600m long street in 5 minutes. What is his speed in km per hour?\n\n";
	cout<<"\n\n\t(a)3.6\n\t(b)7.2\n\t(c)8.4\n\t(d)10\n";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"\n\nYou are right!"  ;
	}
	else
	{
		cout<<"\n\nWrong answer";
	}
	getch();
	clrscr();
	cout<<"\n\n\t\tQuestion 8:\nA father said to his son,'I was as old as you are at the present at the time of your birth'. If the father's age is 38 years now, the son's age 5 years back was?\n\n";
	cout<<"\n\n\t(a)14 yrs\n\t(b)19 yrs\n\t(c)33 yrs\n\t(d)38 yrs\n";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"\n\nWhoa! You are right! Good going.";
	}
	else
	{
		cout<<"\n\nOops. Wrong answer";
	}
	getch();
	clrscr();
	cout<<"\n\n\tQuestion 9:\nWhich of the following is not a prime no.?\n\n";
	cout<<"\n\n\t(a)31\n\t(b)61\n\t(c)71\n\t(d)91\n";
	cin>>ch2;
	if(ch2=='d')
	{
		x=x+10;
		cout<<"\n\nGood.Right answer.";
	}
	else
	{
		cout<<"\n\nWrong answer";
	}
	getch();
	clrscr();
	cout<<"\n\n\t\tQuestion 10:\nIt was Sunday on Jan 1, 2006. What was the day of the week Jan 1, 2010?";
	cout<<"\n\n\t(a)Sunday\n\t(b)Saturday\n\t(c)Friday\n\t(d)Wednesday\n";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"\n\nWell done. Your score is"<<x;
	}
	else
	{
		cout<<"\n\nWrong answer";
	}
	getch();
	clrscr();
	switch(x)
	{
		case 100 : cout<<"Great if done on the first chance.Score 100. \n\nBut you are a cheater if you are repeating";   break;
		case 90 : cout<<"You are extremely intelligent. Score=90";break;
		case 80: cout<<"You are very intelligent. You have a score of 80"; break;
		case 70:
		case 60:
		case 50:
		case 40:
		cout<<"You are just an average student with a score of "<<x; break;
		case 30:
		case 20:
		case 10:
		case 0:
		cout<<"Not even 4 questions correct. No use!";
		default: cout<<"Wrong";
	}
}
void opt3()
{
	clrscr();
	int x;//,y,z;
	x=0;//y=z=0;
	char ch1[100],ch2;//ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
	textcolor(YELLOW);
	cprintf("\n\n\n          Guest enter your name\n\n");
	cin>>ch1;
	clrscr();
	textcolor(YELLOW+BLINK);
	cprintf("              \n\n welcome");
	textcolor(YELLOW);
	cout<<"               \n"<<ch1;
	cprintf("   \n\n welcome to English quiz show  ALL THE BEST !!!\n");
	cout<<" \n\n enter the answer in form of 'a' , 'b', 'c'and 'd'only.";
	cout<<"\n\n  study hard,________you will fail the test? \n \n a.if b.or c.unless d.and.";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"\n \n Good job.your score is->"<<x;
	}
	else
		cout<<"\n \n sorry wrong answer.";
	getch();
	clrscr();
	cout<<"\n \n  our baseball team____________nine players? \n \n a. has b. had c. had d. is.";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"\n \n good job. your choice is ->"<<x;
	}
	else
	cout<<"\n \n sorry wrong answer.";
	getch();
	clrscr();
	cout<<"\n \n Ask him_____________he likes it? \n \n a.if b.that c.though .";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \n \n your score is -> "<<x;
	}
	else
	cout<<" \n \n sorry wrong answer.";
	getch();
	clrscr();
	cout<<" \n \n I___________that woman very well? \n \n a. know b. and knowing.";
	cin>>ch2;
	if(ch2 == 'a')
	{
		x=x+10;
		cout<<" \n\n your score is-> "<<x;
	}
	else
	cout<<" \n \n sorry wrong answer.";
	getch();
	clrscr();
	cout<<" \n \n to understand it is one thing,to teach it is quite ________? \n \n a.other b. the other c. another d. the another.";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<< "\n \n your score is -> "<<x;
	}
	else
	cout<<"\n \n sorry wrong answer.";
	getch();
	clrscr();
	cout<<" \n \n I'd like to make________with you? \n \n a. friend b.the friend c. a friend d. friends.";
	cin>>ch2;
	if(ch2=='d')
	{
		x=x+10;
		cout<<"\n \n your score is ->"<<x;
	}
	else
	cout<<"\n \n sory wrong answer.";
	getch();
	clrscr();
	cout<< "\n \n My younger brother has just_________a letter from his girlfriend? \n \n a. receive b. received c. receiving d.to receive.";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<< " \n \n your score is -> "<<x;
	}
	else
	cout<<" \n \n sorry wrong answer.";
	getch();
	clrscr();
	cout<<" \n \n _____________those men are handsome? \n \n a. all b. every c.everyone.";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \n \n your score is ->"<<x;
	}
	else
		cout<<" \n \n sorry wrong answer.";
	getch();
	clrscr();
	cout<< "\n \n My house is as _____________as your house? \n \n a. bigger b.big c. biggest c. the biggest.";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<< "\n \n your score is -> "<<x;
	}
	else
	cout<<" \n \n sorry wrong answer.";
	getch();
	clrscr();
	cout<<" \n \n would you mind _____________the window? \n \n a.to close b.close c.closing.";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<" \n \n your score is ->"<<x;
	}
	else
	cout<<"\n \n sorry wrong answer.";
	getch();
	clrscr();
	if(x==100)
		cout<<"\n \n no cheating ......you have done this earlier also \n";
	if(x==90)
		cout<<" \n \n you are extremely intelligent your score is 90 \n";
	if(x==80)
		cout<<"you are intelligent your score is 80 \n";
	if(50==x||x==70||x==60)
		cout<<" \n \n you are average your score is \n" <<x<<" \n \n Better luck next time \n";
	else if(x<=40)
	 cout<< "\n\n No use........Not even 5 questions right \n \n";
}