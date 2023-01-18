// Auto-generated module | 2026-05-11T21:35:28.778608
#include <iostream>
#include <vector>

int compute_671() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_671() << std::endl;
    return 0;
}
