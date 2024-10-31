// Auto-generated module | 2026-05-12T03:44:51.191054
#include <iostream>
#include <vector>

int compute_969() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_969() << std::endl;
    return 0;
}
