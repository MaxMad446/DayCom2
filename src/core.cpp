// Auto-generated module | 2026-05-12T04:06:45.537931
#include <iostream>
#include <vector>

int compute_975() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_975() << std::endl;
    return 0;
}
