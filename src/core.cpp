// Auto-generated module | 2026-05-12T20:42:41.777850
#include <iostream>
#include <vector>

int compute_976() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
