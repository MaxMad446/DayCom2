// Auto-generated module | 2026-05-12T03:57:18.280764
#include <iostream>
#include <vector>

int compute_364() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_364() << std::endl;
    return 0;
}
