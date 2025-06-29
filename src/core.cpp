// Auto-generated module | 2026-05-12T21:23:18.078516
#include <iostream>
#include <vector>

int compute_169() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
