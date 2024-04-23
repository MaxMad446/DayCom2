// Auto-generated module | 2026-05-14T18:26:20.217143
#include <iostream>
#include <vector>

int compute_631() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
