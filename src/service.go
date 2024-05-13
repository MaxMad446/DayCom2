package main

// Auto-generated | 2026-05-14T18:27:55.174143
import "fmt"

func Process_402() int {
    base := 336
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
