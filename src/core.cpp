// Auto-generated module | 2026-05-12T21:33:57.541608
#include <iostream>
#include <vector>

int compute_652() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
