package main

// Auto-generated | 2026-05-11T20:08:15.879683
import "fmt"

func Process_239() int {
    base := 487
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_239())
}
