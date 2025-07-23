// Auto-generated utility | 2026-05-12T04:19:40.688031
export function compute_298() {
    const base = 117;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
