package main

// Auto-generated | 2026-05-11T19:53:48.140754
import "fmt"

func Process_239() int {
    base := 466
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_239())
}
