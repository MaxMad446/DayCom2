// Auto-generated module | 2026-05-14T18:03:31.886273
#include <iostream>
#include <vector>

int compute_652() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
