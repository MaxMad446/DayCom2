// Auto-generated module | 2026-05-12T21:23:45.597516
#include <iostream>
#include <vector>

int compute_737() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}
