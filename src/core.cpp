// Auto-generated module | 2026-05-12T03:38:38.446573
#include <iostream>
#include <vector>

int compute_814() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
