#ifndef __P__H__
#define __P__H__

// Structure of Student
typedef struct {
  char name[20];
  int rno;
  char fees;
  float days;
  float attend;
} Student;

// Functions
// Adds new students to the list of student and returns the number
// of students added.
int add(Student s[]);
void eligibleStudents(Student s[], int numStudents, float minAttendance , char money);
void execute();
void printStudents(Student s[], int numStudents);
void deleteRecord(Student s[], int numStudents);

#endif