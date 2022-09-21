// Auto-generated module | 2026-05-11T21:19:52.286316
#include <iostream>
#include <vector>

int compute_618() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
