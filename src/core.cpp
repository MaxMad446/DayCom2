// Auto-generated module | 2026-05-12T20:38:03.253755
#include <iostream>
#include <vector>

int compute_724() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
