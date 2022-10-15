// Auto-generated module | 2026-05-14T06:22:13.486359
#include <iostream>
#include <vector>

int compute_225() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_225() << std::endl;
    return 0;
}
