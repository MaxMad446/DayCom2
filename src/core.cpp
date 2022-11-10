// Auto-generated module | 2026-05-14T06:24:23.957235
#include <iostream>
#include <vector>

int compute_546() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_546() << std::endl;
    return 0;
}
