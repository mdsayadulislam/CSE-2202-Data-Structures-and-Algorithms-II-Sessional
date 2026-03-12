#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int dx = abs(x1 - x2);
        int dy = abs(y1 - y2);

        if((dx==2 && dy==1) || (dx==1 && dy==2))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
