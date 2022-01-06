package main

// Auto-generated | 2026-05-13T22:00:54.151444
import "fmt"

func Process_297() int {
    base := 228
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_297())
}
