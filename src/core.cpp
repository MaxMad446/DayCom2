// Auto-generated module | 2026-05-11T22:08:26.944281
#include <iostream>
#include <vector>

int compute_226() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_226() << std::endl;
    return 0;
}
