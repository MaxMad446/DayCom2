// Auto-generated module | 2026-05-12T03:58:20.250907
#include <iostream>
#include <vector>

int compute_528() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
