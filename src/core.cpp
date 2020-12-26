// Auto-generated module | 2026-05-12T20:03:07.173590
#include <iostream>
#include <vector>

int compute_930() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
