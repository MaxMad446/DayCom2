// Auto-generated module | 2026-05-12T21:28:43.693370
#include <iostream>
#include <vector>

int compute_968() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_968() << std::endl;
    return 0;
}
