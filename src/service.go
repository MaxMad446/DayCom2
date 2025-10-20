package main

// Auto-generated | 2026-05-12T04:31:40.083461
import "fmt"

func Process_751() int {
    base := 429
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_751())
}
