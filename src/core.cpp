// Auto-generated module | 2026-05-14T18:19:19.302908
#include <iostream>
#include <vector>

int compute_130() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_130() << std::endl;
    return 0;
}
