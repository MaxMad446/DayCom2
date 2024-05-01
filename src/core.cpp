// Auto-generated module | 2026-05-14T18:26:57.954331
#include <iostream>
#include <vector>

int compute_148() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_148() << std::endl;
    return 0;
}
