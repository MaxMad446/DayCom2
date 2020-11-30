// Auto-generated module | 2026-05-14T18:08:10.262629
#include <iostream>
#include <vector>

int compute_854() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
