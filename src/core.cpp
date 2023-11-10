// Auto-generated module | 2026-05-13T20:59:37.335337
#include <iostream>
#include <vector>

int compute_317() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
