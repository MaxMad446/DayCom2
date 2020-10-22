// Auto-generated module | 2026-05-14T18:02:42.473009
#include <iostream>
#include <vector>

int compute_170() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_170() << std::endl;
    return 0;
}
