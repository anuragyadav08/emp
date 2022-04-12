#include<iostream.h>
#include<conio.h>
class A
{
 private:
     long int hra,da,food,sal,gsal,HRA,DA,FOOD;

 public:
      long int get_data()
      {
       cout<<"Enter Salary : ";
       cin>>sal;
	cout<<"Enter HRA : ";
       cin>>hra;
	cout<<"Enter DA : ";
       cin>>da;
	cout<<"Enter Food Allowance : ";
       cin>>food;
       HRA=sal*hra/100;
       DA=sal*da/100;
       FOOD=sal*food/100;
       gsal=sal+HRA+DA+FOOD;
       return gsal;
      }
      void put_data(long int gsal)
      {
       if(sal<=20000 && sal>0)
       {
	    cout<<"Gross Salary : "<<gsal<<"  with no DA HRA and food Alowance";
       }
       else if(sal>20000 && sal<=40000)
       {


	    cout<<"Gross Salary : "<<gsal<<"  with 10% DA,3% HRA and 2% food Alowance";
       }
       else if(sal>40000 && sal<=90000)
       {

	   cout<<"Gross Salary : "<<gsal<<"  with 15% DA,6% HRA and 4% food Alowance";
       }
       else if(sal>90000)
       {

       cout<<"Gross Salary : "<<gsal<<"  with 20% DA,7% HRA and 8% food Alowance";
       }
       else
       {
	cout<<"Salary Can't be negative";
       }
      }
};
void main()
{
 A obj;
 long int c;
 clrscr();
 c=obj.get_data();
 obj.put_data(c);
 getch();
}