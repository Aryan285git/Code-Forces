#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int num_test_cases;
    cin >> num_test_cases; // Number of test cases

    for (int tc = 0; tc < num_test_cases; tc++)
    {
        ll size_of_sequence, threshold;
        cin >> size_of_sequence >> threshold; // Size of the sequence and the given threshold value

        ll sequence[size_of_sequence];

        for (ll i = 0; i < size_of_sequence; i++)
            cin >> sequence[i]; // Reading the elements of the sequence

        sort(sequence, sequence + size_of_sequence); // Sorting the sequence in ascending order

        int start_index = 0;
        ll max_subsequence_length = 0;

        // Finding the longest subsequence with the difference between any two elements less than or equal to the threshold
        for (int i = 0; i < size_of_sequence; i++)
        {
            int end_index = start_index + 1;
            while (end_index < size_of_sequence)
            {
                if (sequence[end_index] - sequence[end_index - 1] > threshold)
                {
                    break;
                }
                end_index++;
            }
            ll subsequence_length = end_index - start_index;
            max_subsequence_length = max(max_subsequence_length, subsequence_length);
            start_index = end_index;
        }

        // Outputting the minimum number of integers to be removed to satisfy the condition
        cout << size_of_sequence - max_subsequence_length << endl;
    }
    return 0;
}