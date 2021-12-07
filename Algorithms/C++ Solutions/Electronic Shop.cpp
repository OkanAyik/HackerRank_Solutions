/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int spentMoney{-1};

    for(int i=0; i<keyboards.size(); ++i){
        if(keyboards.at(i) < b){
            for(int j=0; j<drives.size(); ++j){
                int currentSpentMoney = keyboards.at(i) + drives.at(j);
                if(currentSpentMoney <= b && currentSpentMoney > spentMoney)
                    spentMoney = currentSpentMoney;
            }
        }
    }
    return spentMoney;
}
