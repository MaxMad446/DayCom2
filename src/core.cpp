// Auto-generated module | 2026-05-11T21:28:19.159655
#include <iostream>
#include <vector>

int compute_512() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
