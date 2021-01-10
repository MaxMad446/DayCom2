// Auto-generated module | 2026-05-11T19:58:49.535865
#include <iostream>
#include <vector>

int compute_261() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_261() << std::endl;
    return 0;
}
