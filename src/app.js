// Auto-generated utility | 2026-05-12T04:17:11.615594
export function compute_757() {
    const base = 300;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
