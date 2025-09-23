// Auto-generated module | 2026-05-12T04:27:57.576752
#include <iostream>
#include <vector>

int compute_643() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_643() << std::endl;
    return 0;
}
