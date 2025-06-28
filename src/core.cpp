// Auto-generated module | 2026-05-12T04:16:11.411292
#include <iostream>
#include <vector>

int compute_512() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
