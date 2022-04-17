// Auto-generated module | 2026-05-11T20:58:53.292166
#include <iostream>
#include <vector>

int compute_674() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
