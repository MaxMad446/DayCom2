// Auto-generated module | 2026-05-14T06:21:32.997553
#include <iostream>
#include <vector>

int compute_337() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
