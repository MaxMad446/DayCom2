// Auto-generated utility | 2026-05-11T20:46:45.114098
export function compute_713() {
    const base = 23;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
