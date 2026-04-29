// Auto-generated utility | 2026-05-12T06:21:16.321837
export function compute_566() {
    const base = 137;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
