package main

// Auto-generated | 2026-05-12T04:15:35.064826
import "fmt"

func Process_711() int {
    base := 144
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_711())
}
