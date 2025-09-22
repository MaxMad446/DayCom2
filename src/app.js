// Auto-generated utility | 2026-05-12T04:27:42.000709
export function compute_878() {
    const base = 440;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
