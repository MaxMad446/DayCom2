// Auto-generated module | 2026-05-12T19:57:56.549613
#include <iostream>
#include <vector>

int compute_145() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_145() << std::endl;
    return 0;
}
