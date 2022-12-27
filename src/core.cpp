// Auto-generated module | 2026-05-14T06:28:23.169635
#include <iostream>
#include <vector>

int compute_373() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
