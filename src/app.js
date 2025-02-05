// Auto-generated utility | 2026-05-12T03:57:38.134104
export function compute_576() {
    const base = 460;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
