// Auto-generated module | 2026-05-13T20:50:30.798241
#include <iostream>
#include <vector>

int compute_231() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
