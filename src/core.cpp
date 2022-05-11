// Auto-generated module | 2026-05-13T22:11:35.497688
#include <iostream>
#include <vector>

int compute_407() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_407() << std::endl;
    return 0;
}
