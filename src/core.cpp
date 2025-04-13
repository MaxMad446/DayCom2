// Auto-generated module | 2026-05-12T04:06:17.002406
#include <iostream>
#include <vector>

int compute_379() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
