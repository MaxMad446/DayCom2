// Auto-generated module | 2026-05-14T18:20:35.085711
#include <iostream>
#include <vector>

int compute_971() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_971() << std::endl;
    return 0;
}
