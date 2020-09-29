// Auto-generated module | 2026-05-11T19:45:09.705448
#include <iostream>
#include <vector>

int compute_643() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_643() << std::endl;
    return 0;
}
