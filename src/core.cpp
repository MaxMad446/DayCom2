// Auto-generated module | 2026-05-12T21:19:09.615837
#include <iostream>
#include <vector>

int compute_642() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
