// Auto-generated module | 2026-05-14T18:12:54.756365
#include <iostream>
#include <vector>

int compute_291() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
