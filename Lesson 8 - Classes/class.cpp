//--------------------------------------------------------------------------------------------------------------------//
//-----------------ToDo sort the students by name, then by number, then by gradDate-------------------------------------
/*
You will be given information for 5 students. You will need to sort the students by name, 
then sort them by number, and finally sort them by graduation date.
After each sort print out all the information on each of the students.
*/
//--------------------------------------------------------------------------------------------------------------------//
/*Goal: sort students by multiple data values
**
**student1: Name: Joe Lime, ID#15, Grad. Date: 2019
**student2: Name: Bob Green, ID#3, Grad. Date: 2020
**student3: Name: SallyAnne Green , ID#1, Grad. Date: 2017
**student4: Name: Annie Blue, ID#10, Grad. Date: 2020
**student5: Name: Jose Lemon, ID#25, Grad. Date: 2016
*/
//--------------------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------------------//
#include"main.hpp"
#include<string>

//--------------------------------------------------------------------------------------------------------------------//

void enter_student_data();
void sorting_student_data(char * students_names, int students_ides[], int students_grade_date[] );
void print_students_data_after_sorting(char * students_names, int students_ides[], int students_grade_date[] );

//--------------------------------------------------------------------------------------------------------------------//
using namespace std;
int main()
{
    //ToDo sort the students by name, then by number, then by gradDate
   enter_student_data();

   return 0;
}
//--------------------------------------------------------------------------------------------------------------------//

void enter_student_data()
{
    cout<<"please Enter students data : "<<endl;

    string students_names[5];
    int students_ides[5];
    int students_grade_date[5];

    for (int i = 0; i < 5 ; i++)
    {
        string name;
        printf("Please enter student %i Name :",i);
        cin>>name;
        students_names[i]=name;
        
        int id;
        printf("Please enter student %i id :",i);
        cin>>id;
        students_ides[i]=id;

        int grade;
        printf("Please enter student %i  Grad Date :",i);
        cin>>grade;
        students_ides[i]=grade;
    }
   
   
 sorting_student_data( students_names, students_ides,  students_grade_date );
}
//--------------------------------------------------------------------------------------------------------------------//

void sorting_student_data( char *students_name, int students_ides[], int students_grade_date[] )
{
    for(int i =0 ; i< (sizeof(students_ides)/sizeof(students_ides[0])) ;i++)
    {
            for(int s =i+1 ; s< (sizeof(students_ides)/sizeof(students_ides[0]-i)) ; s++)
            {
                int tmp;
                int lsort  = students_ides[i];
                int rsort = students_ides[s];
                if(rsort > lsort)
                {
                    tmp              = lsort; //tmp now have the i value
                    students_ides[i] = rsort; //i   now have the s value
                    students_ides[s] = tmp  ; //s   now have the i value
                }
            }
    }

   
   
    print_students_data_after_sorting( students_names,students_ides,students_grade_date);
}

//--------------------------------------------------------------------------------------------------------------------//

void print_students_data_after_sorting(char * students_names, int students_ides[], int students_grade_date[] )
{
    for (int i = 0; i < 5 ; i++)
    {

        printf("Please enter student %i Name :",students_names[i]);
        printf("Please enter student %i id :",students_ides[i]);
        printf("Please enter student %i  Grad Date :",students_grade_date[i]);


    }
}