// Auto-generated module | 2026-05-13T20:28:34.657364
#include <iostream>
#include <vector>

int compute_648() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_648() << std::endl;
    return 0;
}
