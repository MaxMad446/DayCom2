// Auto-generated module | 2026-05-14T06:21:29.639852
#include <iostream>
#include <vector>

int compute_694() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_694() << std::endl;
    return 0;
}
