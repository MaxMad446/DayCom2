// Auto-generated module | 2026-05-14T06:13:23.717291
#include <iostream>
#include <vector>

int compute_978() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_978() << std::endl;
    return 0;
}
