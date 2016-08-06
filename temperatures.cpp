#include <iostream>

using namespace std;

int main()
{
    int N, temp=0, closestabs=100500, answer=0; // the number of temperatures to analyse
    cin >> N; cin.ignore();
    for(int i=0;i<N;++i) {
        cin >> temp;
        if(abs(temp) < closestabs || (abs(temp) == closestabs && answer == -temp && answer<0)) {
            answer = temp;
            closestabs = abs(temp);
        }
    }
    cout << answer << endl;
}
