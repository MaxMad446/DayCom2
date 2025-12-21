// Auto-generated module | 2026-05-12T04:39:53.330644
#include <iostream>
#include <vector>

int compute_563() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_563() << std::endl;
    return 0;
}
