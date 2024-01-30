// Auto-generated module | 2026-05-14T18:19:34.062539
#include <iostream>
#include <vector>

int compute_913() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_913() << std::endl;
    return 0;
}
