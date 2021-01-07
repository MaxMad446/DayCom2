// Auto-generated module | 2026-05-14T18:13:22.439074
#include <iostream>
#include <vector>

int compute_463() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
