#include<bits/stdc++.h>
using namespace std;
int Calculate_Angle(int hr_hand , int min_hand){
  int ang_trace_by_hr = (hr_hand * 30) % 360 + min_hand/2 ;//24 hour format
  int ang_trace_by_min = min_hand * 6 ;
  return abs(ang_trace_by_hr - ang_trace_by_min);

}
int main()
{
  int hour_hand ;
  int minute_hand ;
  cin >> hour_hand >> minute_hand ;
  int diff = Calculate_Angle(hour_hand , minute_hand) ;
  //printf(Calculate_Angle(hour_hand , minute_hand));
  cout << diff;
  return 0;
}
