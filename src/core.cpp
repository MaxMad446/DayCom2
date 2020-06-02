// Auto-generated module | 2026-05-11T19:29:29.084776
#include <iostream>
#include <vector>

int compute_656() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}
