// Auto-generated utility | 2026-05-12T04:12:34.812121
export function compute_800() {
    const base = 366;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
