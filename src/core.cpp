// Auto-generated module | 2026-05-11T19:35:45.251726
#include <iostream>
#include <vector>

int compute_437() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
