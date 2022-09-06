// Auto-generated module | 2026-05-11T21:17:56.190134
#include <iostream>
#include <vector>

int compute_845() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
