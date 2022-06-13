#include <iostream>
#include <fstream>
#include <string>

using namespace std;
ifstream fin("input.txt");

struct record{
    char type;
    string warehouse[5] = {"NewYork", "LosAngeles", "Miami", "Houston", "Chicago"};
    int amt[3] = {0, 0, 0};
};
struct price{
    double price;
};
int main(){
    int temp1, temp2, temp3;
    record records;
    price item[3];

    string city1;
    int amt1, amt2, amt3;

if (!fin){
    cout << "File not found" << endl;
    return 0;
}
for(int i = 0; i < 3; i++){
    fin >> item[i].price;
}
while(fin>> records.type){
    if (records.type == 's'){
        fin >> city1;
        for(int i=0; i<5; i++){
            if(city1 == records.warehouse[i]){
                fin>>temp1;
                fin>>temp2;
                fin>>temp3;

                records.amt[0] += temp1;
                records.amt[1] += temp2;
                records.amt[2] += temp3;
            }
        }
            cout<< records.type << "\t" << city1 << "\t" << records.amt[0] 
            << "\t" << records.amt[1] << "\t" << records.amt[2] << endl;
    }
    else if(records.type == 'o'){
        fin >> city1;
        for(int i=0; i<5; i++){
            if(city1 == records.warehouse[i]){
                fin>>temp1;
                fin>>temp2;
                fin>>temp3;

                records.amt[0] += temp1;
                records.amt[1] += temp2;
                records.amt[2] += temp3;
            }
        }
            cout<< records.type << "\t" << city1 << "\t" << records.amt[0] 
            << "\t" << records.amt[1] << "\t" << records.amt[2] << endl;
    }
}
fin.close();
//fout.close();
return 0;

}

