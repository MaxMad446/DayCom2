// Auto-generated module | 2026-05-12T21:11:54.131332
#include <iostream>
#include <vector>

int compute_139() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
