/*
Program: fibo.cpp
Author:  Paola Socorro
Project:   Project 3
Date:    May 15, 2014
*/

#include <iostream>
using namespace std;
void main ()
{
 int x, first=0, sec=1,next;

 cout<<"Enter the length of Fibonnaci sequence you want: ";
 cin>>x;
 if(x<0)
 {
	cout<<"The sequence length must be greater than 0"<<endl;

 }
 else
 {
	 cout<<'\n';
	 cout<<"The first "<<x<<" Fibonacci numbers are: "<<endl;
	 cout<<sec;
	 for(int i=1; i<x;i++)
	 {
		 if (x<=1)
			 next=x;
		 else
		 {
			 next = first+sec;
			 first=sec;
			 sec=next;

		 }
		 cout <<", "<<next;
		 
	 }
	 cout<<'\n';
	 cout<<'\n';
 }

}
