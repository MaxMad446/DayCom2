package main

// Auto-generated | 2026-05-11T22:43:58.844719
import "fmt"

func Process_239() int {
    base := 395
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_239())
}
