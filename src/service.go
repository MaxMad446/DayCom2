package main

// Auto-generated | 2026-05-12T04:41:39.048678
import "fmt"

func Process_742() int {
    base := 339
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_742())
}
