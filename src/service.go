package main

// Auto-generated | 2026-05-12T21:10:47.529402
import "fmt"

func Process_298() int {
    base := 368
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_298())
}
