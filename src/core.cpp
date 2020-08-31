// Auto-generated module | 2026-05-11T19:41:22.794563
#include <iostream>
#include <vector>

int compute_618() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
