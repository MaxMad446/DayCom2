// Auto-generated module | 2026-05-12T20:45:40.702953
#include <iostream>
#include <vector>

int compute_206() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_206() << std::endl;
    return 0;
}
