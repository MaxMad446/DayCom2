// Auto-generated module | 2026-05-11T20:45:02.632390
#include <iostream>
#include <vector>

int compute_477() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_477() << std::endl;
    return 0;
}
