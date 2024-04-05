// Auto-generated module | 2026-05-14T18:24:43.015731
#include <iostream>
#include <vector>

int compute_295() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
