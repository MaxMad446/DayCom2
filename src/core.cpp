// Auto-generated module | 2026-05-12T20:58:00.811090
#include <iostream>
#include <vector>

int compute_464() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_464() << std::endl;
    return 0;
}
