// Auto-generated module | 2026-05-12T19:59:30.614393
#include <iostream>
#include <vector>

int compute_221() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
