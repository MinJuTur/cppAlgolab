#include <iostream>
using namespace std;

int snail[1000001];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main(){
    int numTestCases, num, a, b;
    cin >> numTestCases;
    
    for(int t = 0 ; t < numTestCases ; t++){
        cin >> num >> a >> b;
        bool visited[num][num] = {};
        int k=1, x=0, y=0, dir = 0, nx, ny;
        while(k <= num * num){
            if(!visited[x][y]) {
                snail[k++] = x * num + y + 1;
                visited[x][y] = true;
                nx = x + dx[dir];
                ny = y + dy[dir];
                }
            if (nx < 0 || nx >= num || ny < 0 || ny >= num || visited[nx][ny]) {
                dir = (dir + 1) % 4;
                nx = x + dx[dir];
                ny = y + dy[dir];
            }
                x = nx;
                y = ny;
            }
        for(int i = a ; i <= b ; i++) cout << snail[i] << " ";
        cout << "\n";
    }
}

/*#include <iostream>
using namespace std;
int arr[1000][1000];

void squareSnail(){
    int n, a, b;
    cin >> n >> a >> b;
    int top = 0, bottom = n-1, left = 0, right = n-1;
    int cnt = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = i * n + j + 1;
    while(top <= bottom && left <= right){
        for (int j = left; j <= right; j++) {
            if (cnt >= a && cnt <= b) cout << arr[top][j] << " ";
            cnt++;
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            if (cnt >= a && cnt <= b) cout << arr[i][right] << " ";
            cnt++;
        }
        right--;
        for (int j = right; j >= left; j--) {
            if (cnt >= a && cnt <= b) cout << arr[bottom][j] << " ";
            cnt++;
        }
        bottom--;
        for (int i = bottom; i >= top; i--) {
            if (cnt >= a && cnt <= b) cout << arr[i][left] << " ";
            cnt++;
        }
        left++;
    }
    cout << "\n";
}

int main(){
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--) squareSnail();
}*/