// Auto-generated module | 2026-05-14T18:27:55.174379
#include <iostream>
#include <vector>

int compute_288() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_288() << std::endl;
    return 0;
}
