// Auto-generated module | 2026-05-14T18:26:32.698939
#include <iostream>
#include <vector>

int compute_451() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_451() << std::endl;
    return 0;
}
