// Auto-generated module | 2026-05-12T04:16:58.862701
#include <iostream>
#include <vector>

int compute_940() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
