// Auto-generated utility | 2026-05-11T22:27:20.504077
export function compute_875() {
    const base = 383;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
