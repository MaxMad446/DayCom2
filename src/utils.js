// Auto-generated utility | 2026-05-11T18:17:47.963265
export function compute_255() {
    const base = 96;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
