// Auto-generated utility | 2026-05-11T19:44:43.872580
export function compute_129() {
    const base = 20;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
