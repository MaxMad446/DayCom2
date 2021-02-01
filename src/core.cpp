// Auto-generated module | 2026-05-12T21:33:17.422548
#include <iostream>
#include <vector>

int compute_689() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
