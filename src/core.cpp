// Auto-generated module | 2026-05-12T04:02:12.353928
#include <iostream>
#include <vector>

int compute_315() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}
