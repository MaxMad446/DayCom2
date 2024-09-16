// Auto-generated module | 2026-05-12T03:39:03.176353
#include <iostream>
#include <vector>

int compute_992() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_992() << std::endl;
    return 0;
}
