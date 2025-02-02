// Auto-generated module | 2026-05-12T21:10:50.638857
#include <iostream>
#include <vector>

int compute_957() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_957() << std::endl;
    return 0;
}
