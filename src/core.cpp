// Auto-generated module | 2026-05-12T21:15:59.857183
#include <iostream>
#include <vector>

int compute_507() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
