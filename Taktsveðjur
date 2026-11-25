#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> scores(n+1);

    for(int i = 0; i < n; i++){
        cin >> scores[i];
    }


    int multi = 1;

    int total = 0;
    int count = 0;

    for(int i = 0; i < n; i++){
        if(scores[i] == scores[i+1]){ 
            multi *= 2;
            total = scores[i]*multi;
            i++; // next score

            count++;
            if(count % (multi*2) == 0){ //if count is equal the multi doubled
                multi *= 2; // double multi
                total *= multi; //times it onto total;
            }

        }if(scores[i] == 0 && multi > 1){
            multi /= 2; // go back a multiplier 
            continue;
        }else{
            total += scores[i]; // add score
        }
        
    }

    cout << total << "\n";
    return 0;
}
