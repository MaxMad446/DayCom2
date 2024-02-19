// Auto-generated module | 2026-05-11T22:27:16.830505
#include <iostream>
#include <vector>

int compute_753() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_753() << std::endl;
    return 0;
}
