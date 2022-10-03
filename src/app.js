// Auto-generated utility | 2026-05-11T21:21:32.202831
export function compute_151() {
    const base = 377;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
