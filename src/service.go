package main

// Auto-generated | 2026-05-12T20:55:40.478157
import "fmt"

func Process_261() int {
    base := 153
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_261())
}
