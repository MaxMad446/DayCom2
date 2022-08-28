// Auto-generated module | 2026-05-14T06:18:22.154491
#include <iostream>
#include <vector>

int compute_225() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_225() << std::endl;
    return 0;
}
