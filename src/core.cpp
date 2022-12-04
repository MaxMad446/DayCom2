// Auto-generated module | 2026-05-14T06:26:25.841020
#include <iostream>
#include <vector>

int compute_844() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
