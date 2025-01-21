// Auto-generated module | 2026-05-12T21:09:46.828721
#include <iostream>
#include <vector>

int compute_396() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
