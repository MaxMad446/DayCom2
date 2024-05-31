// Auto-generated module | 2026-05-14T18:29:18.573711
#include <iostream>
#include <vector>

int compute_228() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_228() << std::endl;
    return 0;
}
