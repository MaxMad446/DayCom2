// Auto-generated module | 2026-05-12T04:37:16.490144
#include <iostream>
#include <vector>

int compute_734() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_734() << std::endl;
    return 0;
}
