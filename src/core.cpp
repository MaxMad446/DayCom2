// Auto-generated module | 2026-05-11T20:09:49.470778
#include <iostream>
#include <vector>

int compute_711() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
