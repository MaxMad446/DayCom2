package main

// Auto-generated | 2026-05-12T21:33:49.740939
import "fmt"

func Process_920() int {
    base := 424
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_920())
}
