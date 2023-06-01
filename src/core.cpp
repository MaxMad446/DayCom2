// Auto-generated module | 2026-05-11T21:52:48.262741
#include <iostream>
#include <vector>

int compute_990() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_990() << std::endl;
    return 0;
}
