// Auto-generated module | 2026-05-14T18:18:46.237118
#include <iostream>
#include <vector>

int compute_571() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
