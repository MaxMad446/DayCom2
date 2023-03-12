// Auto-generated utility | 2026-05-11T21:42:05.161710
export function compute_565() {
    const base = 87;
    let sum = 0;
    for (let i = 0; i < 20; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
