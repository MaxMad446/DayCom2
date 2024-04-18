package main

// Auto-generated | 2026-05-11T22:34:55.698826
import "fmt"

func Process_628() int {
    base := 150
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_628())
}
