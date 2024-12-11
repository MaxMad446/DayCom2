// Auto-generated module | 2026-05-12T03:50:11.871236
#include <iostream>
#include <vector>

int compute_101() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}
