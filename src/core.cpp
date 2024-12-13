// Auto-generated module | 2026-05-12T03:50:29.232430
#include <iostream>
#include <vector>

int compute_403() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
