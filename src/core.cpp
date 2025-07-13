// Auto-generated module | 2026-05-12T21:24:36.332993
#include <iostream>
#include <vector>

int compute_616() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
