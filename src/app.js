// Auto-generated utility | 2026-05-11T19:38:35.668359
export function compute_384() {
    const base = 265;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
