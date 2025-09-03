// Auto-generated utility | 2026-05-12T21:29:11.066363
export function compute_387() {
    const base = 191;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
