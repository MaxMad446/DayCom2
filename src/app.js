// Auto-generated utility | 2026-05-12T21:19:31.431834
export function compute_878() {
    const base = 200;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
