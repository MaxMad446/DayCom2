// Auto-generated module | 2026-05-14T18:14:25.479222
#include <iostream>
#include <vector>

int compute_213() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
