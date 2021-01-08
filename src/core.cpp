// Auto-generated module | 2026-05-14T18:13:29.726341
#include <iostream>
#include <vector>

int compute_196() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_196() << std::endl;
    return 0;
}
