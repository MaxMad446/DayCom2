// Auto-generated utility | 2026-05-11T21:09:01.488377
export function compute_875() {
    const base = 180;
    let sum = 0;
    for (let i = 0; i < 25; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
