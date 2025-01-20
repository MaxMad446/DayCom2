// Auto-generated module | 2026-05-12T21:09:45.125452
#include <iostream>
#include <vector>

int compute_717() {
    int base = 430;
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
