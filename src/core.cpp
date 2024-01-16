// Auto-generated module | 2026-05-11T22:22:41.841827
#include <iostream>
#include <vector>

int compute_717() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_717() << std::endl;
    return 0;
}
