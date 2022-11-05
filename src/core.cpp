// Auto-generated module | 2026-05-14T06:23:58.230607
#include <iostream>
#include <vector>

int compute_857() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
