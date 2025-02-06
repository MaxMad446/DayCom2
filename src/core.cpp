// Auto-generated module | 2026-05-12T03:57:44.581382
#include <iostream>
#include <vector>

int compute_548() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_548() << std::endl;
    return 0;
}
