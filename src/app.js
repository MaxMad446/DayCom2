// Auto-generated utility | 2026-05-11T21:10:53.562456
export function compute_113() {
    const base = 32;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
