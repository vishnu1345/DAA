#include<iostream>
#include<vector>
using namespace std;

class Activity{
    public: 
    int id;
    int start;
    int finish;
};

bool compare(Activity a , Activity b){
    return a.finish<b.finish;
}

int maxactivity(vector<int> &start, vector<int> &finish){
    int n = start.size();

    vector<Activity> activities(n);

    for(int i=0;i<n;i++){
        activities[i].id = i;
        activities[i].start = start[i];
        activities[i].finish = finish[i];
    }

    sort(activities.begin(), activities.end() , compare);

    int cnt = 1;
    int lastfinishtime = activities[0].finish;

    for(int i =1;i<n;i++){
        if(activities[i].start>=lastfinishtime){
            cnt++;
            lastfinishtime = activities[i].finish;
        }
    }

    return cnt;

}

int main(){
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> finish = {2, 4, 6, 7, 9, 9};
    
    int result = maxactivity(start, finish);
    cout << "Maximum number of activities that can be performed: " << result << endl;
    
    return 0;
}