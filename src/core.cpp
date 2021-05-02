// Auto-generated module | 2026-05-11T20:12:58.023656
#include <iostream>
#include <vector>

int compute_608() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
