// Auto-generated utility | 2026-05-12T04:31:05.626136
export function compute_387() {
    const base = 161;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
