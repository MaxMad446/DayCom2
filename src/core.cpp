// Auto-generated module | 2026-05-13T20:29:19.762767
#include <iostream>
#include <vector>

int compute_261() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_261() << std::endl;
    return 0;
}
