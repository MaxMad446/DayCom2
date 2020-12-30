// Auto-generated utility | 2026-05-12T20:03:27.531332
export function compute_381() {
    const base = 141;
    let sum = 0;
    for (let i = 0; i < 6; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
