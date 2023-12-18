#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops

struct WorkShop{
    int startTime;
    int duration;
    int endTime;
};

struct Available_Workshops{
    int numberOfWorkshop;
    vector<WorkShop> WorkShopArr;
};

Available_Workshops* initialize (int start_time[], int duration[], int n)
{
    Available_Workshops* pAvailableWorkShop = new Available_Workshops;
    pAvailableWorkShop->numberOfWorkshop = n;
    
    for(int i=0; i<n; i++){
        WorkShop t_WorkShop;
        
        t_WorkShop.startTime = start_time[i];
        t_WorkShop.duration = duration[i];
        t_WorkShop.endTime = start_time[i] + duration[i];
        
        pAvailableWorkShop->WorkShopArr.push_back(t_WorkShop);
    }
    return pAvailableWorkShop;
}

int CalculateMaxWorkshops(Available_Workshops* ptr)
{      
    std::multimap<int, int> WS_Map; // key -> start / value -> end
    int result = 0;
    
    
    for(int i=0; i<ptr->numberOfWorkshop; ++i){
        
        int startTime = ptr->WorkShopArr[i].startTime;
        int endTime = ptr->WorkShopArr[i].endTime;
        
        WS_Map.insert ( make_pair(endTime, startTime));
    }
    
    int time = 0;
        
    for(auto it = WS_Map.begin(); it != WS_Map.end(); ++it){
        if(time <= it->second){
            ++result;
            time = it->first;
        }
    }
    
    return result;
}


int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
