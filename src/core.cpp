// Auto-generated module | 2026-05-14T06:19:57.288545
#include <iostream>
#include <vector>

int compute_225() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_225() << std::endl;
    return 0;
}
