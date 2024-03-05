// Auto-generated module | 2026-05-14T18:22:28.925058
#include <iostream>
#include <vector>

int compute_622() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
