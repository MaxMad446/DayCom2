// Auto-generated module | 2026-05-14T06:17:58.130301
#include <iostream>
#include <vector>

int compute_580() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
