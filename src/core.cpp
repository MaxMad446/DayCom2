// Auto-generated module | 2026-05-13T20:47:03.714296
#include <iostream>
#include <vector>

int compute_618() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
