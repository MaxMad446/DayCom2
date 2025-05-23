// Auto-generated utility | 2026-05-12T04:11:40.633659
export function compute_721() {
    const base = 417;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
