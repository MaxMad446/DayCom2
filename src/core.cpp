// Auto-generated module | 2026-05-14T06:14:24.861517
#include <iostream>
#include <vector>

int compute_842() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_842() << std::endl;
    return 0;
}
