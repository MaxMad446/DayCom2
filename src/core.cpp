// Auto-generated module | 2026-05-11T19:46:59.849418
#include <iostream>
#include <vector>

int compute_708() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
