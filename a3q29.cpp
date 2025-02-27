/*Define a structure Student with fields name and marks. Pass an array of students to a 
function that displays all student details.*/
#include<iostream>
using namespace std;
struct Student
{
    string name;
    int marks;
};
void displayStudents(Student arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Name: "<<arr[i].name<<endl;
        cout<<"Marks: "<<arr[i].marks<<endl;
    }

}
int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    Student students[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the name of student "<<i+1<<": ";
        cin>>students[i].name;
        cout<<"Enter the marks of student "<<i+1<<": ";
        cin>>students[i].marks;
    }
    displayStudents(students,n);
    return 0;
}
