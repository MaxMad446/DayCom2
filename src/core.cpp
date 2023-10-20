// Auto-generated module | 2026-05-11T22:11:12.737336
#include <iostream>
#include <vector>

int compute_211() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
