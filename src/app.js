// Auto-generated utility | 2026-05-12T20:52:57.359816
export function compute_298() {
    const base = 471;
    let sum = 0;
    for (let i = 0; i < 29; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
