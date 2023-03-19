// Auto-generated module | 2026-05-11T21:42:58.121895
#include <iostream>
#include <vector>

int compute_662() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_662() << std::endl;
    return 0;
}
