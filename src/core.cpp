// Auto-generated module | 2026-05-12T20:42:15.239858
#include <iostream>
#include <vector>

int compute_961() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_961() << std::endl;
    return 0;
}
