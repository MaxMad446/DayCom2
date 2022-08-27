// Auto-generated module | 2026-05-14T06:18:13.784892
#include <iostream>
#include <vector>

int compute_805() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
