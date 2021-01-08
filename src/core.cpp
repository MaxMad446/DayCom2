// Auto-generated module | 2026-05-11T19:58:35.316031
#include <iostream>
#include <vector>

int compute_650() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
