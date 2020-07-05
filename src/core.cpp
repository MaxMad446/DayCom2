// Auto-generated module | 2026-05-11T19:33:50.645392
#include <iostream>
#include <vector>

int compute_635() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
