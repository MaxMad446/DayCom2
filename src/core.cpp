// Auto-generated module | 2026-05-12T04:08:46.449431
#include <iostream>
#include <vector>

int compute_282() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
