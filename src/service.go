package main

// Auto-generated | 2026-05-12T21:16:44.407905
import "fmt"

func Process_261() int {
    base := 201
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_261())
}
