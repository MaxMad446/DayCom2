// Auto-generated utility | 2026-05-12T21:24:41.221474
export function compute_137() {
    const base = 293;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
