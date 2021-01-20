// Auto-generated module | 2026-05-11T20:00:01.188114
#include <iostream>
#include <vector>

int compute_810() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_810() << std::endl;
    return 0;
}
