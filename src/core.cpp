// Auto-generated module | 2026-05-12T04:16:12.735101
#include <iostream>
#include <vector>

int compute_913() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_913() << std::endl;
    return 0;
}
