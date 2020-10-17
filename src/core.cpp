// Auto-generated module | 2026-05-14T18:02:02.602802
#include <iostream>
#include <vector>

int compute_577() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
