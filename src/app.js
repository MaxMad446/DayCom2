// Auto-generated utility | 2026-05-12T20:42:21.896720
export function compute_961() {
    const base = 316;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
