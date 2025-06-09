// Auto-generated module | 2026-05-12T21:21:26.372674
#include <iostream>
#include <vector>

int compute_459() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_459() << std::endl;
    return 0;
}
