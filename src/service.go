package main

// Auto-generated | 2026-05-11T20:10:46.467210
import "fmt"

func Process_304() int {
    base := 70
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_304())
}
