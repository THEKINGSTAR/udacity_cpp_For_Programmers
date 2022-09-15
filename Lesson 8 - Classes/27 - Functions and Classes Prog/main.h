

//main.h 
#include <iostream>

class Student
{

    public:
    int studentID;
    int grades[10];

    //-------------------------------------------------------

    void setStudentID(int idIN)
    {
        studentID = idIN;
    }
    int GEtsetStudentID()
    {
        return studentID;
    }
    //-------------------------------------------------------
    void setStuedntGrade(int gradeNumber, int gradeIN)
    {
        grades[gradeNumber] = gradeIN;
    }

    int *GetsetStuedntGrade()
    {
        return grades;
    }
    int GetsetStuedntGrade(int gradeNumber)
    {
        return grades[gradeNumber];
    }
    //-------------------------------------------------------
    void printGrades()
    {
        std::cout << "StudentId = "<<studentID << std::endl;
        for (int i = 0; i < 10; i++)
        {
            std::cout << "\t"<<grades[i] << std::endl;
        }
        
    }
    
};

//********************
class CourseEnrollment
{
    public:
    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];
};
//-------------------------------------------------------
