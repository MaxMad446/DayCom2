// Auto-generated module | 2026-05-14T06:25:58.314402
#include <iostream>
#include <vector>

int compute_518() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_518() << std::endl;
    return 0;
}
