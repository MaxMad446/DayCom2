// Auto-generated module | 2026-05-14T06:15:05.802645
#include <iostream>
#include <vector>

int compute_766() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_766() << std::endl;
    return 0;
}
