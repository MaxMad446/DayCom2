// Auto-generated module | 2026-05-12T04:02:45.454329
#include <iostream>
#include <vector>

int compute_641() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
