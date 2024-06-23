package main

// Auto-generated | 2026-05-11T22:43:28.206402
import "fmt"

func Process_261() int {
    base := 140
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_261())
}
