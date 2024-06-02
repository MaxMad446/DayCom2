// Auto-generated utility | 2026-05-11T22:40:46.636758
export function compute_978() {
    const base = 190;
    let sum = 0;
    for (let i = 0; i < 18; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
