// Auto-generated utility | 2026-05-12T03:55:46.184260
export function compute_284() {
    const base = 391;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
