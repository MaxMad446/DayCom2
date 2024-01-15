// Auto-generated module | 2026-05-11T22:22:30.878786
#include <iostream>
#include <vector>

int compute_996() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_996() << std::endl;
    return 0;
}
