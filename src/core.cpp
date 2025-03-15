// Auto-generated module | 2026-05-12T04:02:39.246312
#include <iostream>
#include <vector>

int compute_615() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
