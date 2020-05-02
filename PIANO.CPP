#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{clrscr();
char a;
cout<<"Play the PIANO with alphabets \n";
cout<<"To exit press 1";
while(a!=1)
{
a=getch();
switch(a)
{
case 'q':sound(220);delay(100);nosound();break;
case 'w':sound(230);delay(100);nosound();break;
case 'e':sound(240);delay(100);nosound();break;
case 'r':sound(250);delay(100);nosound();break;
case 't':sound(260);delay(100);nosound();break;
case 'y':sound(270);delay(100);nosound();break;
case 'u':sound(280);delay(100);nosound();break;
case 'i':sound(290);delay(100);nosound();break;
case 'o':sound(300);delay(100);nosound();break;
case 'p':sound(310);delay(100);nosound();break;
case 'a':sound(320);delay(100);nosound();break;
case 's':sound(330);delay(100);nosound();break;
case 'd':sound(340);delay(100);nosound();break;
case 'f':sound(350);delay(100);nosound();break;
case 'g':sound(360);delay(100);nosound();break;
case 'h':sound(370);delay(100);nosound();break;
case 'j':sound(380);delay(100);nosound();break;
case 'k':sound(420);delay(100);nosound();break;
case 'l':sound(520);delay(100);nosound();break;
case 'z':sound(390);delay(100);nosound();break;
case 'x':sound(450);delay(100);nosound();break;
case 'c':sound(530);delay(100);nosound();break;
case 'v':sound(440);delay(100);nosound();break;
case 'b':sound(470);delay(100);nosound();break;
case 'n':sound(670);delay(100);nosound();break;
case 'm':sound(580);delay(100);nosound();break;
case '1':exit(0);
}
}
}