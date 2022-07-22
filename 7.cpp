#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<conio.h> 
#include<fstream.h> 
#include<iostream.h> 
class list 
{ 
public: 
//member functions 
void match( ); 
void write( ); 
}; 
void list :: write( ) 
{ 
//declaration of necessary arguments 
fstream fp1,fp2; 
int i,m,n; 
char name[20]; 
//opening files in write mode 
fp1.open("file1.txt", ios :: out); 
fp2.open("file2.txt", ios :: out); 
cout<<"\n Enter the number of names you want to enter in file1 \n "; 
cin>>m; 
cout<<"\nEnter the names in ascending order \n"; 
for(i=0;i<m;i++) 
{ 
cin>>name; 
fp1<<name; 
fp1<<'\n'; 
} 
cout<<"\n Enter the number of names you want to enter in file2 \n "; 
cin>>n; 
cout<<"\nEnter the names in assending order \n"; 
for(i=0;i<n;i++) 
{ 
cin>>name; 
fp2<<name; 
fp2<<'\n'; 
} 
fp1.close( );
fp2.close( ); 
} 
void list :: match( ) 
{ 
list obj; 
char list1[50][50],list2[50][50]; 
int i,j,m,n; 
fstream fp1,fp2,fp3; 
obj.write( ); 
fp1.open("file1.txt",ios::in); 
fp2.open("file2.txt",ios::in); 
fp3.open("file3.txt",ios::out); 
m=0; 
n=0; 
cout<<"\n file 1 name list \n"; 
while(!fp1.eof( )) 
{ 
fp1.getline(list1[m],20,'\n'); 
cout<<"\n"; 
cout<<list1[m]; 
m++; 
} 
cout<<"\n file 2 name list\n"; 
while(!fp2.eof( )) 
{ 
fp2.getline(list2[n],20,'\n'); 
cout<<"\n"; 
cout<<list2[n]; 
n++; 
}
m--; 
n--;
i=0; 
j=0; 
cout<<"\nElements common to both files are \n "; 
while(i<m && j<n) 
{ 
if(strcmp(list1[i],list2[j])==0) 
{ 
fp3<<list1[i]; 
cout<<"\n"; 
cout<<list1[i]; 
cout<<"\n"; 
fp3<<'\n'; 
i++; 
j++; 
} 
else 
{ 
//cout<<”\n none \n”; 
if(strcmp(list1[i],list2[j])<0) 
{ 
i++; 
} 
else 
{ 
j++; 
} 
} 
} 
} 
void main( ) 
{ 
int ch; 
list obj; 
clrscr( ); 
cout<<"\n *******Cosequential Match*********"; 
while(1) 
{ 
cout<<"\n1.Match"; 
cout<<"\n2.Exit"; 
cout<<"\nEnter your choice"; 
cin>>ch; 
switch(ch)
{ 
case 1 : obj.match( ); //for consequential match 
break; 
case 2 : exit(0); 
break; 
default : cout<<"\nInvalid choice"; 
break; 
} 
} 
}

