// Auto-generated utility | 2026-05-11T21:56:46.396722
export function compute_749() {
    const base = 380;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
