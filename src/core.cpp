// Auto-generated module | 2026-05-12T20:49:38.313170
#include <iostream>
#include <vector>

int compute_977() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
