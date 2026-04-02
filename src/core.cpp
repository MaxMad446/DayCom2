// Auto-generated module | 2026-05-12T06:17:34.204119
#include <iostream>
#include <vector>

int compute_504() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_504() << std::endl;
    return 0;
}
