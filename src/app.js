// Auto-generated utility | 2026-05-12T04:38:07.483245
export function compute_825() {
    const base = 154;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
