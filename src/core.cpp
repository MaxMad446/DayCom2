// Auto-generated module | 2026-05-11T19:47:46.670446
#include <iostream>
#include <vector>

int compute_271() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_271() << std::endl;
    return 0;
}
