// Auto-generated module | 2026-05-12T21:33:31.201929
#include <iostream>
#include <vector>

int compute_583() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
