// Auto-generated module | 2026-05-12T04:44:35.673398
#include <iostream>
#include <vector>

int compute_320() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_320() << std::endl;
    return 0;
}
