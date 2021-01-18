// Auto-generated module | 2026-05-12T21:32:10.230284
#include <iostream>
#include <vector>

int compute_142() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
