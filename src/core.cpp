// Auto-generated module | 2026-05-12T20:01:12.679521
#include <iostream>
#include <vector>

int compute_247() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
