// Auto-generated module | 2026-05-12T21:16:24.146326
#include <iostream>
#include <vector>

int compute_353() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_353() << std::endl;
    return 0;
}
