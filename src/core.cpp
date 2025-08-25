// Auto-generated module | 2026-05-12T21:28:20.172543
#include <iostream>
#include <vector>

int compute_963() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_963() << std::endl;
    return 0;
}
