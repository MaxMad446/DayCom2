// Auto-generated module | 2026-05-12T04:46:51.422973
#include <iostream>
#include <vector>

int compute_195() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
