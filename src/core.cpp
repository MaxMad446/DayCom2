// Auto-generated module | 2026-05-12T04:46:04.707095
#include <iostream>
#include <vector>

int compute_866() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_866() << std::endl;
    return 0;
}
