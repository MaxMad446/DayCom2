// Auto-generated module | 2026-05-14T06:18:50.993984
#include <iostream>
#include <vector>

int compute_525() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
