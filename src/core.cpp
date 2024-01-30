// Auto-generated module | 2026-05-14T18:19:35.544968
#include <iostream>
#include <vector>

int compute_638() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_638() << std::endl;
    return 0;
}
