// Auto-generated module | 2026-05-14T18:18:10.940141
#include <iostream>
#include <vector>

int compute_729() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_729() << std::endl;
    return 0;
}
