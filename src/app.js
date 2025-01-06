// Auto-generated utility | 2026-05-12T03:53:42.878575
export function compute_623() {
    const base = 380;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
