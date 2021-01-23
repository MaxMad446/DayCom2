// Auto-generated module | 2026-05-14T18:15:23.365505
#include <iostream>
#include <vector>

int compute_479() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_479() << std::endl;
    return 0;
}
