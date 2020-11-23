// Auto-generated module | 2026-05-14T18:07:06.323031
#include <iostream>
#include <vector>

int compute_794() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_794() << std::endl;
    return 0;
}
