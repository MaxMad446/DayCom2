// Auto-generated module | 2026-05-12T04:31:09.855128
#include <iostream>
#include <vector>

int compute_967() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
