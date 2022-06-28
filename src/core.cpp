// Auto-generated module | 2026-05-14T06:13:29.116150
#include <iostream>
#include <vector>

int compute_521() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
