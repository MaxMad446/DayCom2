// Auto-generated module | 2026-05-12T03:42:57.172107
#include <iostream>
#include <vector>

int compute_726() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
