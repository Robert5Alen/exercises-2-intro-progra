
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {

for(int n=1;n<s1.size();n++)
{



if(s1[n]==' ')
{
cout<<n<<endl;

}


}
cout<<s1.size()<<endl;
  	
	

}

void exercise_2(string s1) {

if(s1.size()==0){
	
	
}
else{

cout<<"[";
for(int n=0;n<s1.size();n++)
{
	
	if(s1[n]!=' ')
	{
		
		cout<<s1[n];
	}
	
	else{
		
		cout<<"]"<<endl<<"[";
	}
	
		
}
cout<<"]\n";

}





}

void exercise_3(string s1) {
  
for(int n=0;s1.size()>n;n++)
{
if(s1[n]=='1')
{

cout<<"Om-nom-nom :P\n";


}

if(s1.size()>19)
{
	
	cout<<"Om-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\n";
break;

}


 if(s1[n]=='0')
{

cout<<"No cake :(\n";


break;


}
}

}

void exercise_4(int n) {
  
	int x=1;
	
	if (n<0)
{
cout<<"El numero es negativo. Intentelo de nuevo\n";


}

else if (n>=13)
{
cout<<"El numero es muy grande. Intentelo de nuevo\n";
	
}

	
else
{

	for(long double cont=1;cont<=n;cont++)
	{
		
	 x=x*cont;
		
	}
	cout<<x<<endl;
	
	}
  
}

void exercise_5(int n, int k) {
  int resp=-n+2;



while(n==n)
{
	
	for(int line=0;line<7 ;line++)
	{
		if (n>1 && resp<=0)
		{
			
			cout<<"   ";
		}
		
		
	    else if(resp>=1 && resp<10)
		{
			cout<<" "<<resp<<" ";
		}
		else
		{
		cout<<resp<<" ";	
		}
		
	
		n--;
	resp++;
	
	if(resp>k)
{
	break;
}	
		
	}
	
	cout<<"\n";
	
if(resp>k)
{
	break;
}
}
	

	
	
}

int exercise_6(int n) {
 
	
  return 0;
}

void exercise_7(int n) {
  double res=1;
for(int cont=2;cont<=n;cont++)
{
	
	res=res+((pow(-1,cont+1))/cont);
	
}
	cout<<res<<endl;
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}