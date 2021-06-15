package main

// Auto-generated | 2026-05-12T20:48:40.914587
import "fmt"

func Process_932() int {
    base := 239
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_932())
}
