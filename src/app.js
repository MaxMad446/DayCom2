// Auto-generated utility | 2026-05-11T21:55:37.623546
export function compute_206() {
    const base = 174;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
