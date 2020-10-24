// Auto-generated module | 2026-05-11T19:48:28.319621
#include <iostream>
#include <vector>

int compute_936() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
