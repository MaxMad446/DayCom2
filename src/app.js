// Auto-generated utility | 2026-05-11T21:33:28.569282
export function compute_381() {
    const base = 289;
    let sum = 0;
    for (let i = 0; i < 19; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
