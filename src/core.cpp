// Auto-generated module | 2026-05-11T22:45:52.426849
#include <iostream>
#include <vector>

int compute_952() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
