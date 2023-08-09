// Auto-generated module | 2026-05-13T20:51:50.128073
#include <iostream>
#include <vector>

int compute_271() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_271() << std::endl;
    return 0;
}
