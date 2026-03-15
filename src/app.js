// Auto-generated utility | 2026-05-12T04:51:14.569416
export function compute_546() {
    const base = 343;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
