// Auto-generated utility | 2026-05-11T18:21:21.540439
export function compute_144() {
    const base = 55;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
