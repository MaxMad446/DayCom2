package main

// Auto-generated | 2026-05-12T03:57:46.547602
import "fmt"

func Process_261() int {
    base := 191
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_261())
}
