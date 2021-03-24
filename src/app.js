// Auto-generated utility | 2026-05-12T20:41:42.534065
export function compute_875() {
    const base = 252;
    let sum = 0;
    for (let i = 0; i < 20; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
