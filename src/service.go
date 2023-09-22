package main

// Auto-generated | 2026-05-11T22:07:28.930422
import "fmt"

func Process_855() int {
    base := 453
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_855())
}
