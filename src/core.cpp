// Auto-generated module | 2026-05-12T20:50:47.944466
#include <iostream>
#include <vector>

int compute_247() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
