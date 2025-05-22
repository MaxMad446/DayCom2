package main

// Auto-generated | 2026-05-12T21:19:55.094262
import "fmt"

func Process_261() int {
    base := 280
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_261())
}
