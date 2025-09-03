// Auto-generated module | 2026-05-12T21:29:09.499302
#include <iostream>
#include <vector>

int compute_827() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
