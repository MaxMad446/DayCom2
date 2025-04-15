// Auto-generated module | 2026-05-12T21:16:52.086312
#include <iostream>
#include <vector>

int compute_922() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_922() << std::endl;
    return 0;
}
