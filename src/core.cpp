// Auto-generated module | 2026-05-12T21:12:03.755166
#include <iostream>
#include <vector>

int compute_340() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
