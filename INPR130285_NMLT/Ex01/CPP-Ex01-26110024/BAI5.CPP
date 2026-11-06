#include <bits/stdc++.h>

using namespace std;

int n;
string s[100005];
double a[100005];

//a
double diemtrungbinh(double a[], int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum+=a[i];
    }
    return sum/n;
}
//b
void inten(double a[], double trungbinh)
{
    cout << "DANH SACH HOC SINH DUOI TRUNG BINH:" << endl;
    for (int i = 1; i <= n; i++) {
        if (a[i] < trungbinh) {
            cout << s[i] << endl;
        }
    }
}
//c
double caonhat(double a[])
{
    double check = a[1];
    for (int i = 2; i <= n; i++) {
        if (a[i] > check) {
            check = a[i];
        }
    }
    return check;

}
//d
void intencaonhat(double a[], double check)
{
    cout << "DANH SACH HOC SINH CO DIEM CAO NHAT" << endl;
    for (int i = 1; i <= n; i++) {
        if (a[i] == check) {
            cout << s[i] << endl;
        }
    }
}


main()
{
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++) {
        getline(cin, s[i]);
        cin >> a[i];
        cin.ignore();
    }
    //for (int i = 1; i <= n; i++) {
    //    cout << s[i] << " - " << a[i] << endl;
    //}

    cout << "DIEM TRUNG BINH: "<< diemtrungbinh(a,n) << endl;
    double trungbinh = diemtrungbinh(a,n);
    inten(a,trungbinh);
    double maxcaonhat = caonhat(a);
    cout << "BAI KIEM TRA CAO NHAT: " << maxcaonhat << endl;
    intencaonhat(a,maxcaonhat);



}
