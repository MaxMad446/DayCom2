// Auto-generated module | 2026-05-12T20:58:39.894409
#include <iostream>
#include <vector>

int compute_423() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
