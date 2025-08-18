// Auto-generated module | 2026-05-12T04:23:00.382368
#include <iostream>
#include <vector>

int compute_280() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_280() << std::endl;
    return 0;
}
