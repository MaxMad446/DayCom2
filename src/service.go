package main

// Auto-generated | 2026-05-12T21:35:18.233120
import "fmt"

func Process_872() int {
    base := 197
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_872())
}
