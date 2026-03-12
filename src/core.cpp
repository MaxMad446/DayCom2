// Auto-generated module | 2026-05-12T04:50:50.488940
#include <iostream>
#include <vector>

int compute_189() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
