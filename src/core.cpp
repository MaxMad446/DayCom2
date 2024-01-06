// Auto-generated module | 2026-05-14T18:17:33.921414
#include <iostream>
#include <vector>

int compute_245() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_245() << std::endl;
    return 0;
}
