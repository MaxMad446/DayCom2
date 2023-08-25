// Auto-generated module | 2026-05-13T20:53:11.561447
#include <iostream>
#include <vector>

int compute_674() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
