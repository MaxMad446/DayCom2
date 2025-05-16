// Auto-generated module | 2026-05-12T21:19:25.349632
#include <iostream>
#include <vector>

int compute_986() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
