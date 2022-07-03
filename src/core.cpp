// Auto-generated module | 2026-05-14T06:13:56.334810
#include <iostream>
#include <vector>

int compute_281() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_281() << std::endl;
    return 0;
}
