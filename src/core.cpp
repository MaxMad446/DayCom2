// Auto-generated module | 2026-05-12T21:38:19.756418
#include <iostream>
#include <vector>

int compute_990() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_990() << std::endl;
    return 0;
}
