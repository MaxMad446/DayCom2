// Auto-generated module | 2026-05-13T21:02:25.970747
#include <iostream>
#include <vector>

int compute_891() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
