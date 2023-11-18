// Auto-generated module | 2026-05-11T22:14:57.216815
#include <iostream>
#include <vector>

int compute_656() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}
