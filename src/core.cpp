// Auto-generated module | 2026-05-12T21:38:10.179918
#include <iostream>
#include <vector>

int compute_170() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_170() << std::endl;
    return 0;
}
