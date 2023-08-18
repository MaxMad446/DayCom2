// Auto-generated utility | 2026-05-11T22:02:51.771058
export function compute_134() {
    const base = 238;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
