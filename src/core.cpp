// Auto-generated module | 2026-05-12T21:39:09.573354
#include <iostream>
#include <vector>

int compute_253() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_253() << std::endl;
    return 0;
}
