// Auto-generated module | 2026-05-14T18:20:11.725409
#include <iostream>
#include <vector>

int compute_796() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_796() << std::endl;
    return 0;
}
