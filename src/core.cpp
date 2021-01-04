// Auto-generated module | 2026-05-12T20:35:24.058867
#include <iostream>
#include <vector>

int compute_505() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_505() << std::endl;
    return 0;
}
