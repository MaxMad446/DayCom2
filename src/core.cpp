// Auto-generated module | 2026-05-11T19:56:24.834943
#include <iostream>
#include <vector>

int compute_866() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_866() << std::endl;
    return 0;
}
