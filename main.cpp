#include<bits/stdc++.h>
using namespace std;
class studentname
{
public: string
name;
void read()
{
cout<<"Enter name=";
cin>>name;
} };
20
class studentmarks:public studentname
{
public: int
a[6],total=0,i,sum=0;
void input() {
for(i=0;i<6;i++) {
if(i==0)
{
cout<<"Enter Marks of Telugu=";
}
else if(i==1)
{
cout<<"Enter Marks of Hindi=";
}
else if(i==2)
{
cout<<"Enter Marks of English=";
}
else if(i==3)
{
cout<<"Enter Marks of Maths=";
}
else if(i==4)
{
cout<<"Enter Marks of Sceince=";
}
else
{
cout<<"Enter Marks of Social=";
}
cin>>a[i];
total=total+a[i];
if(a[i]>100){
sum=sum+1;}
}
} };
class studentcgpa:public studentmarks
{
public: int
gpa[6],total1=0;
float cgpa;
void output()
{
if(sum==0){
for(i=0;i<6;i++){
if(a[i]>90) {
gpa[i]=10; }
else if(a[i]>80&&a[i]<91)
{
gpa[i]=9; }
else if(a[i]>70&&a[i]<81)
{
gpa[i]=8;
}
else if(a[i]>60&&a[i]<71)
{
gpa[i]=7; }
else if(a[i]>50&&a[i]<61)
{
gpa[i]=6; }
else if(a[i]>40&&a[i]<51)
{
gpa[i]=5;
}
else if(a[i]>34&&a[i]<41) {
gpa[i]=4; }
else {
gpa[i]=0; }
total1=total1+gpa[i]; }}
cgpa=float(total1)/6;
}
};
class studentdisplay:public studentcgpa {
public: void
display(){
if(sum==0){
cout<<"Student Name:"<<name<<endl;
cout<<"Total Marks:"<<total<<endl;
cout<<"CGPA in Telugu:"<<gpa[0]<<endl;
cout<<"CGPA in Hindi:"<<gpa[1]<<endl;
cout<<"CGPA in English:"<<gpa[2]<<endl;
cout<<"CGPA in Maths:"<<gpa[3]<<endl;
cout<<"CGPA in Science:"<<gpa[4]<<endl;
cout<<"CGPA in Social:"<<gpa[5]<<endl;
cout<<"Total CGPA:"<<setprecision(3)<<cgpa;
}
else{cout<<"ERROR";}}
};
int main() {
studentdisplay obj;
obj.read();
obj.input();
obj.output();
obj.display(); }
