// Auto-generated module | 2026-05-11T20:46:28.741552
#include <iostream>
#include <vector>

int compute_866() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_866() << std::endl;
    return 0;
}
