// Auto-generated module | 2026-05-14T18:24:55.863556
#include <iostream>
#include <vector>

int compute_245() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_245() << std::endl;
    return 0;
}
