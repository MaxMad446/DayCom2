package main

// Auto-generated | 2026-05-12T20:42:35.393589
import "fmt"

func Process_178() int {
    base := 252
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_178())
}
