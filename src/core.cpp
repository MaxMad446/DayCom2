// Auto-generated module | 2026-05-14T18:25:14.458905
#include <iostream>
#include <vector>

int compute_424() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_424() << std::endl;
    return 0;
}
