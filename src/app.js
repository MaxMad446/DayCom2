// Auto-generated utility | 2026-05-14T06:14:58.134211
export function compute_586() {
    const base = 161;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
