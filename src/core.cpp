// Auto-generated module | 2026-05-11T20:00:07.676675
#include <iostream>
#include <vector>

int compute_717() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_717() << std::endl;
    return 0;
}
