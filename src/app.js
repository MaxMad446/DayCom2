// Auto-generated utility | 2026-05-11T20:22:57.850556
export function compute_813() {
    const base = 365;
    let sum = 0;
    for (let i = 0; i < 18; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
