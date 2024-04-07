// Auto-generated module | 2026-05-14T18:24:52.694867
#include <iostream>
#include <vector>

int compute_527() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_527() << std::endl;
    return 0;
}
