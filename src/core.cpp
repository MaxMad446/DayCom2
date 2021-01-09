// Auto-generated module | 2026-05-14T18:13:35.498663
#include <iostream>
#include <vector>

int compute_174() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
