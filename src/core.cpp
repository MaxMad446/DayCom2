// Auto-generated module | 2026-05-14T18:28:46.493612
#include <iostream>
#include <vector>

int compute_753() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_753() << std::endl;
    return 0;
}
