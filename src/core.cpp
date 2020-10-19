// Auto-generated module | 2026-05-14T18:02:19.745614
#include <iostream>
#include <vector>

int compute_815() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
