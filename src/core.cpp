// Auto-generated module | 2026-05-12T04:10:18.826522
#include <iostream>
#include <vector>

int compute_750() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
