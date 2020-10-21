// Auto-generated module | 2026-05-14T18:02:33.755253
#include <iostream>
#include <vector>

int compute_290() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
