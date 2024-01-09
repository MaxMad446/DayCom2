// Auto-generated module | 2026-05-14T18:17:48.732028
#include <iostream>
#include <vector>

int compute_189() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
