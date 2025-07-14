// Auto-generated utility | 2026-05-12T21:24:39.049403
export function compute_732() {
    const base = 473;
    let sum = 0;
    for (let i = 0; i < 11; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
