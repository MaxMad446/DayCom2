// Auto-generated module | 2026-05-14T18:11:38.583267
#include <iostream>
#include <vector>

int compute_246() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
