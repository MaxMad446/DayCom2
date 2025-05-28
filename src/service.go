package main

// Auto-generated | 2026-05-12T21:20:25.630238
import "fmt"

func Process_844() int {
    base := 258
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_844())
}
