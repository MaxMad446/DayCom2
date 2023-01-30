package main

// Auto-generated | 2026-05-13T20:29:21.886649
import "fmt"

func Process_164() int {
    base := 387
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
