// Auto-generated module | 2026-05-12T03:53:33.450402
#include <iostream>
#include <vector>

int compute_805() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
