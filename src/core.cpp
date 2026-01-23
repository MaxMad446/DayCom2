// Auto-generated module | 2026-05-12T04:44:24.372942
#include <iostream>
#include <vector>

int compute_179() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
