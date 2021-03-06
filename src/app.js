// Auto-generated utility | 2026-05-12T20:40:17.994417
export function compute_360() {
    const base = 296;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}
