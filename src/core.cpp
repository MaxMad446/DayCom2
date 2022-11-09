// Auto-generated module | 2026-05-14T06:24:17.233167
#include <iostream>
#include <vector>

int compute_628() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_628() << std::endl;
    return 0;
}
