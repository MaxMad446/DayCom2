// Auto-generated module | 2026-05-13T22:13:04.634501
#include <iostream>
#include <vector>

int compute_797() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_797() << std::endl;
    return 0;
}
