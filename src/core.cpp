// Auto-generated module | 2026-05-12T20:02:43.669289
#include <iostream>
#include <vector>

int compute_186() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_186() << std::endl;
    return 0;
}
