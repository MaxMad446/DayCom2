// Auto-generated utility | 2026-05-11T21:16:09.915406
export function compute_255() {
    const base = 128;
    let sum = 0;
    for (let i = 0; i < 7; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
