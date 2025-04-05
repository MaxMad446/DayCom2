// Auto-generated module | 2026-05-12T21:15:56.838531
#include <iostream>
#include <vector>

int compute_174() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
