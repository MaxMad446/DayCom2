// Auto-generated utility | 2026-05-12T21:04:03.047033
export function compute_725() {
    const base = 250;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
