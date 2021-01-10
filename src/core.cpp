// Auto-generated module | 2026-05-14T18:13:42.685489
#include <iostream>
#include <vector>

int compute_295() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
