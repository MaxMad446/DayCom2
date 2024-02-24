// Auto-generated module | 2026-05-14T18:21:38.103192
#include <iostream>
#include <vector>

int compute_735() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_735() << std::endl;
    return 0;
}
