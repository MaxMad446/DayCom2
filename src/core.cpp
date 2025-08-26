// Auto-generated module | 2026-05-12T21:28:22.779177
#include <iostream>
#include <vector>

int compute_747() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
