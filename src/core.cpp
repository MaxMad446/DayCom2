// Auto-generated module | 2026-05-14T18:25:31.013685
#include <iostream>
#include <vector>

int compute_147() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
