// Auto-generated module | 2026-05-12T21:18:57.593322
#include <iostream>
#include <vector>

int compute_147() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
