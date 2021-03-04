package main

// Auto-generated | 2026-05-11T20:05:44.552590
import "fmt"

func Process_308() int {
    base := 416
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_308())
}
