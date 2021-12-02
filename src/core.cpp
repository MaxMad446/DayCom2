// Auto-generated module | 2026-05-12T21:03:16.712943
#include <iostream>
#include <vector>

int compute_649() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_649() << std::endl;
    return 0;
}
