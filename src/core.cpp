// Auto-generated module | 2026-05-12T04:48:52.487912
#include <iostream>
#include <vector>

int compute_721() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
