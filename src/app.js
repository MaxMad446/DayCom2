// Auto-generated utility | 2026-05-11T22:34:37.477545
export function compute_246() {
    const base = 196;
    let sum = 0;
    for (let i = 0; i < 20; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
