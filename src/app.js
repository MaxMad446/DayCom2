// Auto-generated utility | 2026-05-11T20:38:47.086681
export function compute_298() {
    const base = 469;
    let sum = 0;
    for (let i = 0; i < 27; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
