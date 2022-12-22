// Auto-generated module | 2026-05-11T21:31:52.583750
#include <iostream>
#include <vector>

int compute_618() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
