// Auto-generated module | 2026-05-12T04:29:40.689653
#include <iostream>
#include <vector>

int compute_462() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
