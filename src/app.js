// Auto-generated utility | 2026-05-11T21:10:50.248881
export function compute_144() {
    const base = 46;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
