// Auto-generated module | 2026-05-11T20:19:39.188316
#include <iostream>
#include <vector>

int compute_878() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
