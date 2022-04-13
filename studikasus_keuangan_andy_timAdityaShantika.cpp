#include <iostream>
#include <iomanip>
using namespace std;
#define u_perbulan 300000
class Tabungan {
public:
	void iteratif();
 int bln,u_kuliah[20],u_lainnya[20],sub_tot[20],jum_tab[20],tot_tabungan,tot;
	};

void Tabungan::iteratif(){
  cout << " Berapa Bulan Pengeluaran yang akan dihitung :";
    cin >> bln;
    cout << "=========================================================================================================================" << endl;
    for (int i =0; i<bln; i++){
        cout << "\t\t\t\t\tPENGELUARAN PADA BULAN " << i+1 << endl;
        cout << " Uang bulanan anda yaitu\t\t\t: " << u_perbulan << endl;
        cout << " Masukan banyaknya keperluan kuliah bulan ini\t: ";
        cin >> u_kuliah[i];
        cout << " Masukan banyaknya keperluan lainnya bulan ini\t: ";
        cin >> u_lainnya[i];
        cout << " Banyaknya total pengeluaran bulan ini yaitu\t: " << u_kuliah[i]+u_lainnya[i] << endl;
        cout << " Uang yang anda Tabung Bulan ini yaitu\t\t: " << u_perbulan-(u_kuliah[i]+u_lainnya[i]) << endl; 
        jum_tab[i]=u_perbulan-(u_kuliah[i]+u_lainnya[i]); 
        sub_tot[i]=u_kuliah[i]+u_lainnya[i];
        tot_tabungan+=jum_tab[i]; 
        tot+=sub_tot[i];
    cout << "=========================================================================================================================" << endl;

    }
	cout<<endl;
    cout << "=========================================================================================================================" << endl;
    cout << "==============================================  RINCIAN PENGELUARAN ANDA  ===============================================\n" << endl;
    cout<<"BULAN   UANG BULANAN    KEPERLUAN KULIAH     KEPERLUAN LAINNYA     TOTAL PENGELUARAN PERBULAN    TOTAL DITABUNG PERBULAN"<<endl;
    cout << "=========================================================================================================================" << endl;
	for (int i=0;i<bln;i++){
		cout<<i+1<<setw(15)<<u_perbulan<<setw(15)<<u_kuliah[i]<<setw(28)<<u_lainnya[i]<<setw(27)<<sub_tot[i]<<setw(27)<< jum_tab[i] <<"\n\n"; 
	}
	cout << endl;
    cout << " Total Pengeluaran anda selama " << bln << " bulan terakhir yaitu\t\t: " <<tot << endl; 
    cout << " Total Tabungan anda selama " << bln << " bulan terakhir yaitu\t\t: " << tot_tabungan<< endl; 
    cout << "=========================================================================================================================" << endl;
}
  
int main() {
  Tabungan andy; 
  andy.iteratif();
}