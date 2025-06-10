#include <iostream>
#include <string>

#define Max_N 100

using namespace std;

int n;

class WeatherInfo
{
    public:
        string date, day, weather;

        WeatherInfo(string ymd = " ", string d = " ", string w = " ")
        {
            this -> date = ymd;
            this -> day = d;
            this -> weather = w;
        }
};

WeatherInfo infos[Max_N];

int main() {
    cin >> n;
    int idx = -1;

    for (int i = 0; i < n; i++) 
    {
        cin >> infos[i].date >> infos[i].day >> infos[i].weather;
        
        if (infos[i].weather == "Rain")
            {
                if (idx == -1)
                    idx = i;
                else
                {
                    if (infos[idx].date > infos[i].date)
                        idx = i;
                }
            }
    }

    cout << infos[idx].date << " " << infos[idx].day << " " << infos[idx].weather;    
    
    return 0;
}