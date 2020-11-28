// Auto-generated module | 2026-05-14T18:07:51.363790
#include <iostream>
#include <vector>

int compute_912() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_912() << std::endl;
    return 0;
}
