// Auto-generated module | 2026-05-14T06:15:54.397423
#include <iostream>
#include <vector>

int compute_337() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
