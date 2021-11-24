// Auto-generated module | 2026-05-12T21:02:34.593003
#include <iostream>
#include <vector>

int compute_726() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
