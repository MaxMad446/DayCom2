// Auto-generated module | 2026-05-14T18:19:57.780896
#include <iostream>
#include <vector>

int compute_760() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
