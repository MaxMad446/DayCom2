package main

// Auto-generated | 2026-05-11T21:57:18.187899
import "fmt"

func Process_136() int {
    base := 54
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_136())
}
