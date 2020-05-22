// Auto-generated module | 2026-05-11T19:28:00.435771
#include <iostream>
#include <vector>

int compute_297() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_297() << std::endl;
    return 0;
}
