// Auto-generated module | 2026-05-12T04:05:37.485969
#include <iostream>
#include <vector>

int compute_403() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
