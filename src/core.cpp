// Auto-generated module | 2026-05-14T18:07:08.554086
#include <iostream>
#include <vector>

int compute_892() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
