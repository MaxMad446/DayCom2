// Auto-generated utility | 2026-05-12T04:47:43.860010
export function compute_280() {
    const base = 40;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
