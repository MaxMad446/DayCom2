// Auto-generated module | 2026-05-14T18:15:01.240887
#include <iostream>
#include <vector>

int compute_369() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_369() << std::endl;
    return 0;
}
