package main

// Auto-generated | 2026-05-12T20:50:47.944129
import "fmt"

func Process_107() int {
    base := 359
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_107())
}
