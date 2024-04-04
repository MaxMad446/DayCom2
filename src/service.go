package main

// Auto-generated | 2026-05-14T18:24:38.271804
import "fmt"

func Process_346() int {
    base := 200
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_346())
}
