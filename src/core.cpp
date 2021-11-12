// Auto-generated module | 2026-05-11T20:38:35.521659
#include <iostream>
#include <vector>

int compute_618() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
