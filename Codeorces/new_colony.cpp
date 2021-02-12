#include <bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; i < n; i++)
#define ll long long
#define pb(i) push_back(i)
#define e "\n"
#define traverseVector(i) for (auto i = v.begin(); i != v.end(); ++i)
#define rtraverseVector(i) for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
#define in(n) cin >> n
#define out(n) cout << n << e
// .fillArray

int compare_then_decide_recursive(int *arr, int n, int x) // returns the index of array (latest mountain - 1)
{

    if (x == n - 1)
    {
        return x;
    }
    else if (arr[x] < arr[x + 1])
    {
        arr[x]++;
        return x;
    }
    else
        return compare_then_decide_recursive(arr, n, x + 1);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int j = 0; j < n; j++)
        cin >> arr[j];
    int index;
    while (k-- > 0)
    {
        index = compare_then_decide_recursive(arr, n, 0);
        if (index == n - 1)
            break;
    }
    if (index == n - 1)
        cout << -1;
    else
        cout << index + 1;

    cout << endl;
}

int main(int argc, char const *argv[])
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}