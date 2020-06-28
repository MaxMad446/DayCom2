// Auto-generated module | 2026-05-11T19:33:01.369535
#include <iostream>
#include <vector>

int compute_288() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_288() << std::endl;
    return 0;
}
