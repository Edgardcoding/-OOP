#include <iostream>

using namespace std;
int main (int argc, char const*argv[])
{
	int nilai, nilaiAkhir,AT,A,T,UT,UA,UE;
	int nilai2, nilaiAkhir2,AT2,A2,T2,UT2,UA2,UE2;
	int nilai3, nilaiAkhir3,AT3,A3,T3,UT3,UA3,UE3;
	
	cout << "\nGrading System V1.0\n";
	cout << "===============================\n";
	cout << "Enter Grade for Student 3 \n\n";
	cout << "Enter Grade for Student 1 : ", cin >> AT;
	cout << "Attendance : ", cin >> A;
	cout << "Quiz : ", cin >> T;
	cout << "Assignment : ", cin >> UT;
	cout << "Mid Exam : ", cin >> UA;
	cout << "Final Exam : ", cin >> UE;
	cout << "//------------------------------//\n";
	
	cout << "\nEnter Grade for Student 2 : ", cin >> AT2;
	cout << "Attendance : ", cin >> A2;
	cout << "Quis : ", cin >> T2;
	cout << "Assignment : ", cin >> UT2;
	cout << "Mid Exam : ", cin >> UA2;
	cout << "Final Exam : ", cin >> UE2;
	cout << "//-----------------------------//\n";
	
	cout << "\nEnter Grade for Student 3 : ", cin >> AT3;
	cout << "Attendence : ", cin >> A3;
	cout << "Quis : ", cin >> T3;
	cout << "Assignment : ", cin >> UT3;
	cout << "Mid Exam : ", cin >> UA3;
	cout << "Final Exam : ", cin >> UE3;
	
	nilai = ((A*10)+(T*10)+(UA*20)+(UT*30)+(UE*30))/100;
	nilai2 = ((A2*10)+(T2*10)+(UA2*20)+(UT2*30)+(UE2*30))/100;
	nilai3 = ((A3*10)+(T3*10)+(UA3*20)+(UT3*30)+(UE3*30))/100;
	
	cout << "\n//=================Hasil===============//\n";
	cout << "Enter Grade for Student\t : " << AT << endl;
	cout << "Attendance : " << A << endl;
	cout << "Quiz\t : " << T << endl;
	cout << "Assignment : " << UT << endl;
	cout << "Mid Exam\t : " << UA << endl;
	cout << "Final Exam : " << UE << endl;
	
	if(nilai >90) {
		cout << "\nSkor \t : A\n";
	} else if((nilai >=85) && (nilai <=90)) {
		cout << "\nSkor \t : A-\n";
	} else if ((nilai >=82) && (nilai <=84)) {
		cout << "\nSkor \t : B+\n";
	} else if((nilai >=78) && (nilai <=81)) {
		cout << "\nSkor \t : B\n";
	} else if((nilai >=75) && (nilai <=77)) {
		cout << "\nSkor \t : B-\n";
	} else if((nilai >=70) && (nilai <=74)) {
		cout << "\nSkor \t : C+\n";
	}else if((nilai >=67) && (nilai <=69)) {
		cout << "\nSkor \t : C\n";
	} else if((nilai >=60) && (nilai <=66)) {
		cout << "\nSkor \t : C-\n";
	} else if((nilai >=40) && (nilai <=59)) {
		cout << "\nSkor \t : D\n";
	} else if((nilai >=0) && (nilai <=39)) {
		cout << "\nSkor \t : F\n";
	}
	
	
	cout << "\nEnter Grade for Student\t : " << AT2 << endl;
	cout << "Attendence : " << A2 << endl;
	cout << "Quiz\t : " << T2 << endl;
	cout << "Assignment : " << UT2 << endl;
	cout << "Mid Exam : " << UA2 << endl;
	cout << "Final Exam : " << UE2 << endl;
	
	
	if(nilai2 >91) {
		cout << "\nSkor \t : A\n";
	} else if ((nilai2 >=85) && (nilai2 <=90)) {
		cout << "\nSkor \t : A-\n";
	} else if ((nilai2 >=82) && (nilai2 <=84)) {
		cout << "\nSkor \t : B+\n";
	} else if((nilai2 >=78) && (nilai2 <=81)) {
		cout << "\nSkor \t : B\n";
	} else if((nilai2 >=75) && (nilai <=77)) {
		cout << "\nSkor \t : B-\n";
	} else if((nilai2 >=70) && (nilai2 <=74)) {
		cout << "\nSkor \t : C+\n";
	} else if((nilai2 >=67) && (nilai2 <=69)) {
		cout << "\nSkor \t : C\n";
	} else if((nilai2 >=60) && (nilai2 <=66)) {
		cout << "\nSkor \t : C-\n";
	} else if((nilai2 >=40) && (nilai2 <=59)) {
		cout << "\nSkor \t : D\n";
	} else if((nilai2 >=0) && (nilai2 <=39)) {
		cout << "\nSkor \t : F\n";
	}
	
	
	cout << "\nEnter Grade for Student\t : " << AT3 << endl;
	cout << "Attendence : " << A3 << endl;
	cout << "Quis\t : " << T3 << endl;
	cout << "Assignment : " << UT3 << endl;
	cout << "Mid Exam : " << UA3 << endl;
	cout << "Final Exam : " << UE3 << endl; 
 	
	if(nilai3 >91) {
		cout << "\nSkor \t : A-\n";
	} else if ((nilai3 >=85) && (nilai3 <=90)) {
		cout << "\nSkor \t : A\n";
	} else if ((nilai3 >=82) && (nilai3 <=84)) {
		cout << "\nSkor \t : B+\n";
	} else if ((nilai3 >=78) && (nilai3 <=81)) {
		cout << "\nSkor \t : B\n";
	} else if ((nilai3 >= 75) && (nilai3 <=77)) {
		cout << "\nSkor \t : B-\n";
	} else if ((nilai3 >=70) && (nilai3 <=74)) {
		cout << "\nSkor \t : C+\n";
	} else if ((nilai3 >=67) && (nilai3 <=69)) {
		cout << "\nSkor \t : C\n";
	} else if ((nilai3 >=60) && (nilai3 <=66)) {
		cout << "\nSkor \t : C-\n";
	} else if ((nilai3 >=40) && (nilai3 <=59)) {
		cout << "\nSkor \t : D\n";
	} else if ((nilai3 >=0) && (nilai3 <=39)) {
		cout << "\nSkor \t : F\n";
	}
	
	
	cout << "\n//----------------------------------//\n";
	cout << " \nThank You \n";
	return 0;
}
