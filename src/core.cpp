// Auto-generated module | 2026-05-12T03:42:15.092874
#include <iostream>
#include <vector>

int compute_266() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_266() << std::endl;
    return 0;
}
