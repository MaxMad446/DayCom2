// Auto-generated module | 2026-05-14T06:26:22.284286
#include <iostream>
#include <vector>

int compute_545() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_545() << std::endl;
    return 0;
}
