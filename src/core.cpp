// Auto-generated module | 2026-05-12T04:08:09.560229
#include <iostream>
#include <vector>

int compute_708() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
