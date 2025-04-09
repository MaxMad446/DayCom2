package main

// Auto-generated | 2026-05-12T21:16:16.555382
import "fmt"

func Process_262() int {
    base := 417
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_262())
}
