// Auto-generated module | 2026-05-12T21:20:26.768739
#include <iostream>
#include <vector>

int compute_662() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_662() << std::endl;
    return 0;
}
