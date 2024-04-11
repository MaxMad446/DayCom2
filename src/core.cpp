// Auto-generated module | 2026-05-14T18:25:10.324867
#include <iostream>
#include <vector>

int compute_771() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_771() << std::endl;
    return 0;
}
