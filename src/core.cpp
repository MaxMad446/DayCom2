// Auto-generated module | 2026-05-12T20:02:37.151927
#include <iostream>
#include <vector>

int compute_491() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
