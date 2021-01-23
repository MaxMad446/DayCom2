// Auto-generated module | 2026-05-12T20:36:49.938644
#include <iostream>
#include <vector>

int compute_147() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
