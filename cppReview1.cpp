#include <iostream>
#include <chrono>
#include <Windows.h> // To allow Sleep function
using namespace std;

int main()
{
    int x = 0;
    auto start_time = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 2'000'000'000; i++)
    {
        x = x + 1;
    }
    // Sleep(1000); // To try for testing.
    auto end_time = std::chrono::high_resolution_clock::now();
    auto diff = end_time - start_time;

    // The decimal point is important - WHY?
    cout << "Elapsed time = " << diff / std::chrono::nanoseconds(1) / 1'000'000'000. << " Seconds.\n";

    // This make more sense.
    // cout << "Elapsed time = " << diff.count() / 1'000'000'000. << " Seconds.\n";

    // reminder to me to show about version of C++ issues if we are using VS 2022:
    // cout << format("Elalpsed time = {:14.8f} Seconds\n", diff.count() / 1'000'000'000.);

    std::cout << x << endl;
    return 0;
}
