// Auto-generated module | 2026-05-12T20:45:43.486151
#include <iostream>
#include <vector>

int compute_726() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
