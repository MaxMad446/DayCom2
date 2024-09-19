// Auto-generated module | 2026-05-12T03:39:27.152447
#include <iostream>
#include <vector>

int compute_539() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_539() << std::endl;
    return 0;
}
