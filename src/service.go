package main

// Auto-generated | 2026-05-11T20:45:41.068780
import "fmt"

func Process_865() int {
    base := 374
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_865())
}
