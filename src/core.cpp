// Auto-generated module | 2026-05-12T21:10:56.122942
#include <iostream>
#include <vector>

int compute_491() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
