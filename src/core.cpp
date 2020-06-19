// Auto-generated module | 2026-05-11T19:31:54.496699
#include <iostream>
#include <vector>

int compute_289() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_289() << std::endl;
    return 0;
}
