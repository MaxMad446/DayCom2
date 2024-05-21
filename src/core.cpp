// Auto-generated module | 2026-05-14T18:28:29.369550
#include <iostream>
#include <vector>

int compute_619() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
