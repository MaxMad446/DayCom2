// Auto-generated module | 2026-05-12T21:38:06.886766
#include <iostream>
#include <vector>

int compute_990() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_990() << std::endl;
    return 0;
}
