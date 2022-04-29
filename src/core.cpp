// Auto-generated module | 2026-05-13T22:10:32.839827
#include <iostream>
#include <vector>

int compute_235() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_235() << std::endl;
    return 0;
}
