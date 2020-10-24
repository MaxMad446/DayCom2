// Auto-generated module | 2026-05-14T18:03:03.843483
#include <iostream>
#include <vector>

int compute_652() {
    int base = 149;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
