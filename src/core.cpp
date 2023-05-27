// Auto-generated module | 2026-05-13T20:39:09.328842
#include <iostream>
#include <vector>

int compute_502() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_502() << std::endl;
    return 0;
}
