// Auto-generated module | 2026-05-12T20:36:03.598724
#include <iostream>
#include <vector>

int compute_544() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
