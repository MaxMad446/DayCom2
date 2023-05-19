// Auto-generated module | 2026-05-11T21:51:00.805204
#include <iostream>
#include <vector>

int compute_332() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_332() << std::endl;
    return 0;
}
