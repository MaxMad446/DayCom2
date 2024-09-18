// Auto-generated module | 2026-05-12T03:39:18.594149
#include <iostream>
#include <vector>

int compute_837() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
