// Auto-generated module | 2026-05-11T19:50:42.992354
#include <iostream>
#include <vector>

int compute_618() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
