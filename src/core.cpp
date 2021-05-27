// Auto-generated module | 2026-05-12T20:47:00.337280
#include <iostream>
#include <vector>

int compute_994() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_994() << std::endl;
    return 0;
}
