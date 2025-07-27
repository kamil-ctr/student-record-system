#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class student{
    int rollnumber;
    string name;
    int age;
    string course;

    public:
      
      void inputstudent(){
        cout<<"enter roll number:\n";
        cin>>rollnumber;
        cin.ignore();
        cout<<"enter name:\n";
        getline(cin,name);
        cout<<"enter age:\n";
        cin>>age;
        cout<<"enter course:\n";
        cin>>course;
      }

      void displaystudents()const{
        cout<<"roll number:"<<rollnumber<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"course:"<<course<<endl;
      }

      int getrollnumber()const{
        return rollnumber;

      }


};
void addstudent(){
    student s;
    s.inputstudent();

    ofstream outfile("student.dat",ios::binary|ios::app);
    if(!outfile){
        cout<<"error in creating file";
        return;
    }
    outfile.write((char*)&s,sizeof(s));
    outfile.close();
    cout<<"student record added successfully\n";
};

void viewstudent(){
    student s;
    
    ifstream infile("student.dat",ios::binary);
    if(!infile)
    {
        cout<<"error in opening file\n";
        return;
    }
    cout<<"All student record:.......\n";
    while(infile.read((char*)&s,sizeof(s))){
        s.displaystudents();
        cout<<"____________________________________________\n";

    }
    infile.close();
};
void searchstudent(){
    int rollno;
    cout<<"enter roll number to find:\n";
    cin>>rollno;

    student s;
    ifstream infile("student.dat",ios::binary);
    if(!infile){
        cout<<"error in opening file\n";
        return;
    }
    bool found=false;
    while(infile.read((char*)&s,sizeof(s))){
        if(s.getrollnumber()==rollno){
            s.displaystudents();
            found=true;
            break;
        }
    }
    infile.close();

    if(!found){
        cout<<"student record not found\n";
    }

};
void updatestudent(){
    int rollno;
    cout<<"enter roll number to search:\n";
    cin>>rollno;

    student s;
    fstream file("student.dat",ios::binary|ios::in|ios::out);
    if(!file){
        cout<<"error in opening file\n";
        return;
    }
    bool found=false;
    while(file.read((char*)&s,sizeof(s))){
        if(s.getrollnumber()==rollno){
            cout<<"exhisting record\n";
            s.displaystudents();
            cout<<"enter new details\n";
            s.inputstudent();
            file.seekp(-sizeof(s),ios::cur);
            file.write((char*)&s,sizeof(s));
            found=true;
            cout<<"student record updated successfully\n";
            break;
        }
    }
    file.close();
    if(!found){
        cout<<"no record found for roll number\n";

    }
};
void deletestudent(){
    int rollno;
    cout<<"enter roll number to find\n";
    cin>>rollno;

    student s;
    ifstream infile("student.dat",ios::binary);
    ofstream outfile("temp.dat",ios::binary);
    if(!infile|!outfile){
        cout<<"error in opening file\n";
        return;
    }
    bool found=false;
    while(infile.read((char*)&s,sizeof(s))){
        if(s.getrollnumber()==rollno){
            found=true;
        }
        else
            outfile.write((char*)&s,sizeof(s));

    }
    infile.close();
    outfile.close();

    remove("student.dat");
    rename("temp.dat","student.dat");

    if(!found){
        cout<<"no record found of the student\n";
    }
    else
        cout<<"record deleted successfully\n";
};

int main()
{
    int option;
    do{
        cout<<"Menu:\n";
        cout<<"1.Add Student.\n"<<"2.View all students.\n"<<"3.Search student.\n"
        <<"4.Update student.\n"<<"5.Delete student.\n"<<"6.Exit.\n";
        cout<<"Enter your option:\n";
        cin>>option;

        switch(option){
            case 1:addstudent();break;
            case 2:viewstudent();break;
            case 3:searchstudent();break;
            case 4:updatestudent();break;
            case 5:deletestudent();break;
            case 6:cout<<"exiting.....\n";break;
            default:cout<<"invalid choice....\n";

        }
    }while(option!=6);
}