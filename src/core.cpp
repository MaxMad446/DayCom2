// Auto-generated module | 2026-05-12T21:09:01.557347
#include <iostream>
#include <vector>

int compute_432() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_432() << std::endl;
    return 0;
}
