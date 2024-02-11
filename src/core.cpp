// Auto-generated module | 2026-05-11T22:26:09.216772
#include <iostream>
#include <vector>

int compute_369() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_369() << std::endl;
    return 0;
}
