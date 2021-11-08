// Auto-generated module | 2026-05-12T21:01:05.079343
#include <iostream>
#include <vector>

int compute_298() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_298() << std::endl;
    return 0;
}
