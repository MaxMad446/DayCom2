// Auto-generated module | 2026-05-14T18:15:17.329629
#include <iostream>
#include <vector>

int compute_406() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_406() << std::endl;
    return 0;
}
