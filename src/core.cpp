// Auto-generated module | 2026-05-12T03:53:37.221978
#include <iostream>
#include <vector>

int compute_211() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
