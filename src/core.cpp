// Auto-generated module | 2026-05-13T20:34:56.930795
#include <iostream>
#include <vector>

int compute_990() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_990() << std::endl;
    return 0;
}
