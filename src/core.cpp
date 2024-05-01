// Auto-generated module | 2026-05-14T18:26:58.757304
#include <iostream>
#include <vector>

int compute_520() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_520() << std::endl;
    return 0;
}
