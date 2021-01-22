// Auto-generated module | 2026-05-12T21:32:30.915043
#include <iostream>
#include <vector>

int compute_808() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_808() << std::endl;
    return 0;
}
