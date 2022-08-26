// Auto-generated utility | 2026-05-11T21:16:35.572835
export function compute_876() {
    const base = 11;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}
