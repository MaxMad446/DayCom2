// Auto-generated module | 2026-05-12T21:12:07.860791
#include <iostream>
#include <vector>

int compute_234() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_234() << std::endl;
    return 0;
}
