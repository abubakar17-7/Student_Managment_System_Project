/*                                        STUDENT MANAGEMENT PROJECT

                             ****************************************************
                            ******************************************************
                           **                      GROUP # 3                     **
                          **                                                      **
                         **                MUHAMMAD ABU-BAKAR 19641                **
                        **                    HAMZA AKRAM 19452                     **
                        **                   MUHAMMAD WAQAS 19115                   **
                         **                  HAMMAD SAEED 19739                    **
                          **                  MOJEEBULLAH 19420                   **
                           **                                                    **
					        ******************************************************
                             ****************************************************
*/

//                                    **********************************
//                                    **   MUHAMMAD ABU-BAKAR 19641   **
//                                    **********************************

#include<iostream>
using namespace std;

int total = 0, i = 0;
//      PERSONAL
string roll_no[100], f_name[100], l_name[100], DOB[100], contact[100], city[100], std_username[100], std_password[100];
//      ATTENDANCE
double present[100] , absent[100] ,total_classes[100], temp_percent[100],percent_attend[100];
//      RESULT
double gain_oop[100], gain_eng[100], gain_math[100], gain_rs[100], gain_ps[100], gain_dld[100];
float oop[100], eng[100], math[100], rs[100], ps[100], dld[100], GPA[100];
string grade[100];

void adminLogin();
void studentLogin();
//ADMIN
void addData();
void showData();
void deleteData();
void updateData();
void markAttend();
void enterResult();
//STUDENT
void updatePassword();
void myProfile();
void myAttend();
void myResult();

int main()
{
	int value;
	do
	{
		cout << "\t\t\t\t\t\t\t\t\t01: ADMIN LOGIN" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t\t02: STUDENT LOGIN" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t\t03: EXIT" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t\tSelect Your Option (1-3) >> ";
		cin >> value;
		system("cls");
		
		switch (value)
		{
		case 1:
			adminLogin();
			break;
		case 2:
			studentLogin();
			break;
		case 3:
			cout << "\t\t\t\t\t\t\t\t\tTHANKS FOR USING STUDENT MANAGEMENT SYSTEM" << endl;
			break;
	    }
    }while(value!=3);
    return 0;
}

void adminLogin()
{
    admin:
	int value;
	string admin_username, admin_password;
	cout << "\t\t\t\t\t\t\t\t\tEnter username : " << endl;
	cin >> admin_username;
	cout << "\t\t\t\t\t\t\t\t\tEnter password : " << endl;
	cin >> admin_password;
	system("cls");

	if (admin_username == "abubakar" && admin_password == "bakar@123")
	{
		do
		{
			cout << "\t\t\t\t\t\t\t\t\t01: ADD STUDENT'S DATA" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t\t02: DELETE STUDENT'S DATA" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t\t03: UPDATE STUDENT'S DATA" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t\t04: SHOW STUDENT'S DATA" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t\t05: MARK STUDENT'S ATTENDANCE" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t\t06: ENTER STUDENT'S RESULT" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t\t07: RETURN TO MAIN MENU" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t\tSelect Your Option (1-7) >> ";
			cin >> value;
			system("cls");
			
			switch (value)
			{
			case 1:
				addData();
				break;
			case 2:
				deleteData();
				break;
			case 3:
				updateData();
				break;
			case 4:
				showData();
				break;
			case 5:
				markAttend();
				break;
			case 6:
				enterResult();
				break;
			case 7:
				break;
			default:
				cout << "\t\t\t\t\t\t\t\t\tINVALID" << endl;
				break;
			}
		}while (value != 7);
	}
	else
	{
		cout << "\t\t\t\t\t\t\t\t\tINVALID LOGIN, PLEASE TRY AGAIN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t01: TRY AGAIN" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t\t02: RETURN TO MAIN MENU" << endl << endl;
		cin>>value;
		system("cls");
		
		switch(value)
		{
		case 1:
			goto admin;
			break;
		case 2:
			break;
		default:
			cout << "\t\t\t\t\t\t\t\t\tINVALID" << endl;
			break;
		}
	}
}

void studentLogin()
{
	student:
	int value;
	string student_username, student_password;
	cout << "\t\t\t\t\t\t\t\t\tEnter username : " << endl;
	cin >> student_username;
	cout << "\t\t\t\t\t\t\t\t\tEnter password : " << endl;
	cin >> student_password;
	system("cls");

	for(int i=0; i<total; i++)
	{
	    if (student_username == std_username[i] && student_password == std_password[i])
	    {
    		do
	    	{
		    	cout << "\t\t\t\t\t\t\t\t\t01: UPDATE PASSWORD" << endl << endl;
		    	cout << "\t\t\t\t\t\t\t\t\t02: SHOW MY DATA" << endl << endl;
			    cout << "\t\t\t\t\t\t\t\t\t03: SHOW MY ATTENDANCE" << endl << endl;
    			cout << "\t\t\t\t\t\t\t\t\t04: SHOW MY RESULT" << endl << endl;
	    		cout << "\t\t\t\t\t\t\t\t\t05: RETURN TO MAIN MENU" << endl << endl;
		    	cout << "\t\t\t\t\t\t\t\t\tSelect Your Option (1-5) >> ";
			    cin >> value;
    			system("cls");
	    		
				switch (value)
		    	{
		    	case 1:
				    updatePassword();
    				break;
			    case 2:
				    myProfile();
    				break;
	    		case 3:
		    		myAttend();
			    	break;
    			case 4:
	    			myResult();
		    		break;
			    case 5:
				    break;
    			default:
	    			cout << "\t\t\t\t\t\t\t\t\tINVALID" << endl;
		    		break;
			    }
    		}while (value != 5);
	    }
	    else
    	{
    		cout << "\t\t\t\t\t\t\t\t\tINVALID LOGIN, PLEASE TRY AGAIN" << endl;
	    	cout << "\t\t\t\t\t\t\t\t\t01: TRY AGAIN" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\t\t02: RETURN TO MAIN MENU" << endl << endl;
    		cin>>value;
	    	system("cls");
	    	
			switch(value)
		    {
    		case 1:
	    		goto student;
		    	break;
    		case 2:
	    		break;
		    default:
			    cout << "\t\t\t\t\t\t\t\t\tINVALID" << endl;
    			break;
	    	}
    	}
    }
}

void addData()
{
	int student;
	cout << "\n\t\t\t\t\t\t\t\t\tHow many Student's Data do you want to Enter : ";
	cin >> student;
	system("cls");
	
	for (int i = total; i < (student + total); i++)
	{
		cout << "\n\t\t\t\t\t\t\t\t\tEnter Data of Student : " << i + 1 << endl << endl;
		cout << "\t\t\t\t\t\t\t\t\tEnter Student's Roll No : ";
		cin>> roll_no[i];
		cout << "\t\t\t\t\t\t\t\t\tEnter Student's First Name : ";
		cin>> f_name[i];
		cout << "\t\t\t\t\t\t\t\t\tEnter Student's Last Name : ";
		cin>> l_name[i];
		cout << "\t\t\t\t\t\t\t\t\tEnter Student's Date of Birth (dd/mm/yyyy) : ";
		cin>> DOB[i];
		cout << "\t\t\t\t\t\t\t\t\tEnter Student's Contact : ";
		cin>> contact[i];
		cout << "\t\t\t\t\t\t\t\t\tEnter Student's City : ";
		cin>> city[i];
		cout << "\t\t\t\t\t\t\t\t\tEnter Student's Username : ";
		cin>> std_username[i];
		cout << "\t\t\t\t\t\t\t\t\tEnter Student's Password : ";
		cin>> std_password[i];
		system("cls");
	}
	total = total + student;
}

void deleteData()
{
	if (total == 0)
	{
		cout << "\t\t\t\t\t\t\t\t\tNo Data Entered" << endl;
	}
	else
	{
		int a;
		cout << "\t\t\t\t\t\t\t\t\tPress 1 to delete Record of all Students" << endl;
		cout << "\t\t\t\t\t\t\t\t\tPress 2 to delete Record of Specific Students" << endl;
		cin >> a;
		if (a == 1)
		{
			total = 0;
			cout << "\t\t\t\t\t\t\t\t\tFull record delete" << endl;
		}
		if (a == 2)
		{
			string rollno;
			cout << "\t\t\t\t\t\t\t\t\tEnter Roll No of Student " << endl;
			cin >> rollno;
    		system("cls");
			
			for (int i = 0; i < total; i++)
			{
				if (rollno == roll_no[i])
				{
					for (int i=0; i < total; i++)
					{
						roll_no[i] = roll_no[i + 1];
						f_name[i] = f_name[i + 1];
						l_name[i] = l_name[i + 1];
						DOB[i] = DOB[i + 1];
						contact[i] = contact[i + 1];
						city[i] = city[i + 1];
						std_username[i] = std_username[i + 1];
						std_password[i] = std_password[i + 1];
					}
					total--;
					cout << "\t\t\t\t\t\t\t\t\tSpecific record delete" << endl;
				}
			}
		}
	}
}

//                                    ***************************
//                                    **   HAMZA AKRAM 19452   **
//                                    ***************************

void showData()
{
	if (total == 0)
	{
		cout << "\t\t\t\t\t\t\t\t\tNo Data Entered" << endl;
	}
	else {
		string rollno;
		cout << "\t\t\t\t\t\t\t\t\tEnter Your Roll No : ";
		cin >> rollno;
		system("cls");
		
		for (int i = 0; i < total; i++)
		{
			if (rollno == roll_no[i])
			{
				cout << "\t\t\t\t\t\t\t\t\tStudent's Roll No : " << roll_no[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tStudent's Name : " << f_name[i] << " " << l_name[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tStudent's Date of Birth (dd/mm/yyyy) : " << DOB[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tStudent's Contact : " << contact[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tStudent's City : " << city[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tStudent's Username : " << std_username[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tStudent's Password : " << std_password[i] << endl << endl;
			}
		}
	}
}

void updateData()
{
	if (total == 0)
	{
		cout << "\t\t\t\t\t\t\t\t\tNo Data Entered" << endl;
	}
	else
	{
		string rollno;
		cout << "\t\t\t\t\t\t\t\t\tEnter Roll No of Student : ";
		cin >> rollno;
		system("cls");
		
		for (int i = 0; i < total; i++)
		{
			if (rollno == roll_no[i])
			{
				cout << "\n\t\t\t\t\t\t\t\t\tPrevious Data of Student " << endl;
				cout << "\t\t\t\t\t\t\t\t\tStudent's Roll No : " << roll_no[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tStudent's Name : " << f_name[i] << " " << l_name[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tStudent's Date of Birth (dd/mm/yyyy) : " << DOB[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tStudent's Contact : " << contact[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tStudent's City : " << city[i] << endl;
				cout << "\n\t\t\t\t\t\t\t\t\tEnter New Data of Student " << endl << endl;
				cout << "\t\t\t\t\t\t\t\t\tEnter Student's Roll No : ";
				cin >> roll_no[i];
				cout << "\t\t\t\t\t\t\t\t\tEnter Student's First Name : ";
				cin >> f_name[i];
				cout << "\t\t\t\t\t\t\t\t\tEnter Student's Last Name : ";
				cin >> l_name[i];
				cout << "\t\t\t\t\t\t\t\t\tEnter Student's Date of Birth (dd/mm/yyyy) : ";
				cin >> DOB[i];
				cout << "\t\t\t\t\t\t\t\t\tEnter Student's Contact : ";
				cin >> contact[i];
				cout << "\t\t\t\t\t\t\t\t\tEnter Student's City : ";
				cin >> city[i];
        		system("cls");
			}
		}
	}
}

//                                    ******************************
//                                    **   MUHAMMAD WAQAS 19115   **
//                                    ******************************

void markAttend()
{
	int mark;
	for (int i = 0; i < total; i++)
	{
		cout << "\t\t\t\t\t\t\t\t\tStudent's Roll No : " << roll_no[i] << endl;
		cout << "\t\t\t\t\t\t\t\t\tStudent's Name : " << f_name[i] << " " << l_name[i] << endl;
		cout << "\t\t\t\t\t\t\t\t\tEnter Student's Attendence(1 for present and 0 for absent) : ";
		cin >> mark;
		system("cls");
		
		if (mark == 1)
		{
			present[i] += 1;
		}
		if (mark == 0)
		{
			absent[i] += 1;
		}
		total_classes[i] += 1;
		temp_percent[i]=present[i]*100;
		percent_attend[i]=temp_percent[i]/total_classes[i];
	}
}

void enterResult()
{
	for (int i = 0; i < total; i++)
	{
		
		cout << "\t\t\t\t\t\t\t\t\tStudent's Roll No : " << roll_no[i] << endl;
		cout << "\t\t\t\t\t\t\t\t\tStudent's Name : " << f_name[i] << " " << l_name[i] << endl;
		cout<<"\t\t\t\t\t\t\t\t\tEnter Gain Marks in Object Oriented Programming (Credit Hours = 4) : ";
	    cin>>gain_oop[i];
	    cout<<"\t\t\t\t\t\t\t\t\tEnter Gain Marks of Math (Credit Hours = 3) : ";
	    cin>>gain_math[i];
	    cout<<"\t\t\t\t\t\t\t\t\tEnter Gain Marks in English (Credit Hours = 3) : ";
	    cin>>gain_eng[i];
		cout<<"\t\t\t\t\t\t\t\t\tGain Marks in Revealed Science (Credit Hours = 1) : ";
		cin>>gain_rs[i];
        cout<<"\t\t\t\t\t\t\t\t\tGain Marks in Pakistan Studies (Credit Hours = 2) : ";
		cin>>gain_ps[i];
	    cout<<"\t\t\t\t\t\t\t\t\tGain Marks in Digital Logic and Design (Credit Hours = 4) : ";
		cin>>gain_dld[i];
		system("cls");
		
//            Find GPA		
		
		
		if (gain_oop[i]>=80)
		    oop[i] = '4';
		else if (gain_oop[i]>=75||gain_oop[i]<80)
		    oop[i] = '3.67';
		else if (gain_oop[i]>70||gain_oop[i]<75)
		    oop[i] = '3.33';
		else if (gain_oop[i]=70)
		    oop[i] = '3';
		else if (gain_oop[i]>=65||gain_oop[i]<70)
		    oop[i] = '2.67';
		else if (gain_oop[i]>60||gain_oop[i]<65)
		    oop[i] = '2.33';
		else if (gain_oop[i]=60)
		    oop[i] = '2';
		else if (gain_oop[i]>=55||gain_oop[i]<60)
		    oop[i] = '1.67';
		else if (gain_oop[i]>50||gain_oop[i]<55)
		    oop[i] = '1.33';
		else if (gain_oop[i]=50)
		    oop[i] = '1';
		else
		    oop[i] = '0';
		
		if (gain_math[i]>=80)
	    	math[i] = '4';
		else if (gain_math[i]>=75||gain_math[i]<80)
	    	math[i] = '3.67';
		else if (gain_math[i]>70||gain_math[i]<75)
	    	math[i] = '3.33';
		else if (gain_math[i]=70)
	    	math[i] = '3';
		else if (gain_math[i]>=65||gain_math[i]<70)
	    	math[i] = '2.67';
		else if (gain_math[i]>60||gain_math[i]<65)
	    	math[i] = '2.33';
		else if (gain_math[i]=60)
	    	math[i] = '2';
		else if (gain_math[i]>=55||gain_math[i]<60)
	    	math[i] = '1.67';
		else if (gain_math[i]>50||gain_math[i]<55)
	    	math[i] = '1.33';
		else if (gain_math[i]=50)
	    	math[i] = '1';
		else
	    	math[i] = '0';
	    	
	    if (gain_eng[i]>=80)
	    	eng[i] = '4';
		else if (gain_eng[i]>=75||gain_eng[i]<80)
	    	eng[i] = '3.67';
		else if (gain_eng[i]>70||gain_eng[i]<75)
	    	eng[i] = '3.33';
		else if (gain_eng[i]=70)
	    	eng[i] = '3';
		else if (gain_eng[i]>=65||gain_eng[i]<70)
	    	eng[i] = '2.67';
		else if (gain_eng[i]>60||gain_eng[i]<65)
	    	eng[i] = '2.33';
		else if (gain_eng[i]=60)
	    	eng[i] = '2';
		else if (gain_eng[i]>=55||gain_eng[i]<60)
	    	eng[i] = '1.67';
		else if (gain_eng[i]>50||gain_eng[i]<55)
	    	eng[i] = '1.33';
		else if (gain_eng[i]=50)
	    	eng[i] = '1';
		else
	    	eng[i] = '0';
		
		if (gain_rs[i]>=80)
	    	rs[i] = '4';
		else if (gain_rs[i]>=75||gain_rs[i]<80)
	    	rs[i] = '3.67';
		else if (gain_rs[i]>70||gain_rs[i]<75)
	    	rs[i] = '3.33';
		else if (gain_rs[i]=70)
	    	rs[i] = '3';
		else if (gain_rs[i]>=65||gain_rs[i]<70)
	    	rs[i] = '2.67';
		else if (gain_rs[i]>60||gain_rs[i]<65)
	    	rs[i] = '2.33';
		else if (gain_rs[i]=60)
	    	rs[i] = '2';
		else if (gain_rs[i]>=55||gain_rs[i]<60)
	    	rs[i] = '1.67';
		else if (gain_rs[i]>50||gain_rs[i]<55)
	    	rs[i] = '1.33';
		else if (gain_rs[i]=50)
	    	rs[i] = '1';
		else
	    	rs[i] = '0';
	    	
	    if (gain_ps[i]>=80)
	    	ps[i] = '4';
		else if (gain_ps[i]>=75||gain_ps[i]<80)
	    	ps[i] = '3.67';
		else if (gain_ps[i]>70||gain_ps[i]<75)
	    	ps[i] = '3.33';
		else if (gain_ps[i]=70)
	    	ps[i] = '3';
		else if (gain_ps[i]>=65||gain_ps[i]<70)
	    	ps[i] = '2.67';
		else if (gain_ps[i]>60||gain_ps[i]<65)
	    	ps[i] = '2.33';
		else if (gain_ps[i]=60)
	    	ps[i] = '2';
		else if (gain_ps[i]>=55||gain_ps[i]<60)
	    	ps[i] = '1.67';
		else if (gain_ps[i]>50||gain_ps[i]<55)
	    	ps[i] = '1.33';
		else if (gain_ps[i]=50)
	    	ps[i] = '1';
		else
	    	ps[i] = '0';
	    	
	    
		if (gain_dld[i]>=80)
	    	dld[i] = '4';
		else if (gain_dld[i]>=75||gain_dld[i]<80)
	    	dld[i] = '3.67';
		else if (gain_dld[i]>70||gain_dld[i]<75)
	    	dld[i] = '3.33';
		else if (gain_dld[i]=70)
	    	dld[i] = '3';
		else if (gain_dld[i]>=65||gain_dld[i]<70)
	    	dld[i] = '2.67';
		else if (gain_dld[i]>60||gain_dld[i]<65)
	    	dld[i] = '2.33';
		else if (gain_dld[i]=60)
	    	dld[i] = '2';
		else if (gain_dld[i]>=55||gain_dld[i]<60)
	    	dld[i] = '1.67';
		else if (gain_dld[i]>50||gain_dld[i]<55)
	    	dld[i] = '1.33';
		else if (gain_dld[i]=50)
	    	dld[i] = '1';
		else
	    	dld[i] = '0';
		
		GPA[i] = (oop[i]*4 + math[i]*3 + eng[i]*3 + rs[i]*1 + ps[i]*2 + dld[i]*4)/17;
	}
}

//                                    ****************************
//                                    **   HAMMAD SAEED 19739   **
//                                    ****************************

void updatePassword()
{
	student:
	int value;
	string student_username, student_password;
	cout << "\t\t\t\t\t\t\t\t\tEnter username : " << endl;
	cin >> student_username;
	cout << "\t\t\t\t\t\t\t\t\tEnter password : " << endl;
	cin >> student_password;
	system("cls");
	
	for(int i=0; i<total; i++)
	{
	    if (student_username == std_username[i] && student_password == std_password[i])
	    {
	    	cout << "\t\t\t\t\t\t\t\t\tEnter New Password" << endl;
	    	cin >> std_password[i];
	    }
	}
}

void myProfile()
{
	if (total == 0)
	{
		cout << "\t\t\t\t\t\t\t\t\tNo Data Entered" << endl;
	}
	else {
		string rollno;
		cout << "\t\t\t\t\t\t\t\t\tEnter Your Roll No : ";
		cin >> rollno;
		system("cls");
		
		for (int i = 0; i < total; i++)
		{
			if (rollno == roll_no[i])
			{
				cout << "\t\t\t\t\t\t\t\t\tRoll No : " << roll_no[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tName : " << f_name[i] << " " << l_name[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tDate of Birth (dd/mm/yyyy) : " << DOB[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tContact : " << contact[i] << endl;
				cout << "\t\t\t\t\t\t\t\t\tCity : " << city[i] << endl << endl;
			}
		}
	}
}

//                                    ***************************
//                                    **   MOJEEBULLAH 19420   **
//                                    ***************************

void myAttend()
{
	string rollno;
	cout << "\t\t\t\t\t\t\t\t\tEnter Your Roll No : ";
	cin >> rollno;
	system("cls");
		
	for (int i = 0; i < total; i++)
	{
		if (rollno == roll_no[i])
		{
			cout << "\t\t\t\t\t\t\t\t\tPresent : " << present[i] << endl;
			cout << "\t\t\t\t\t\t\t\t\tAbsent : " << absent[i] << endl;
			cout << "\t\t\t\t\t\t\t\t\tTotal Classes : " << total_classes[i] << endl;
			cout << "\t\t\t\t\t\t\t\t\tPercentage : " << percent_attend[i] <<endl;
		}
	}
}

void myResult()
{
	string rollno;
	cout<<"Enter Your Roll No : ";
	cin>>rollno;
	system("cls");
	
	for(int i=0; i<total; i++)
	{
		if (rollno==roll_no[i])
		{
    		cout<<"\t\t\t\t\t\t\t\t\tName : "<<f_name[i]<<" "<<l_name[i]<<endl;
	    	cout<<"\t\t\t\t\t\t\t\t\tGain Marks in Object Oriented Programming : "<<gain_oop[i]<<endl;
    	    cout<<"\t\t\t\t\t\t\t\t\tGain Marks in English: "<<gain_eng[i]<<endl;
	        cout<<"\t\t\t\t\t\t\t\t\tGain Marks in Math : "<<gain_math[i]<<endl;
			cout<<"\t\t\t\t\t\t\t\t\tGain Marks in Revealed Science : "<<gain_rs[i]<<endl;
    	    cout<<"\t\t\t\t\t\t\t\t\tGain Marks in Pakistan Studies : "<<gain_ps[i]<<endl;
	        cout<<"\t\t\t\t\t\t\t\t\tGain Marks in Digital Logic and Design : "<<gain_dld[i]<<endl;
	        cout<<"\t\t\t\t\t\t\t\t\tGPA : "<<GPA[i]<<endl<<endl;
        }
    }
}