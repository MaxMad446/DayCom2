// Auto-generated module | 2026-05-14T18:10:27.537298
#include <iostream>
#include <vector>

int compute_894() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_894() << std::endl;
    return 0;
}
