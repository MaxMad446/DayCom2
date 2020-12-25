// Auto-generated module | 2026-05-14T18:11:45.810067
#include <iostream>
#include <vector>

int compute_794() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_794() << std::endl;
    return 0;
}
