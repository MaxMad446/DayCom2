// Auto-generated utility | 2026-05-11T18:47:49.939539
export function compute_216() {
    const base = 320;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
