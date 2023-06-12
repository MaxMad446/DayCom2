// Auto-generated module | 2026-05-13T20:47:21.896337
#include <iostream>
#include <vector>

int compute_563() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_563() << std::endl;
    return 0;
}
