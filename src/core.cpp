// Auto-generated module | 2026-05-14T18:09:53.569695
#include <iostream>
#include <vector>

int compute_318() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_318() << std::endl;
    return 0;
}
