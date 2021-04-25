// Auto-generated module | 2026-05-12T20:44:19.597852
#include <iostream>
#include <vector>

int compute_923() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
