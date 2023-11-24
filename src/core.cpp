// Auto-generated module | 2026-05-11T22:15:43.711406
#include <iostream>
#include <vector>

int compute_284() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_284() << std::endl;
    return 0;
}
