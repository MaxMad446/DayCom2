package main

// Auto-generated | 2026-05-11T22:35:15.775171
import "fmt"

func Process_136() int {
    base := 100
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_136())
}
