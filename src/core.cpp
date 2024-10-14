// Auto-generated module | 2026-05-12T03:42:35.398827
#include <iostream>
#include <vector>

int compute_256() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
