package main

// Auto-generated | 2026-05-12T04:37:00.222939
import "fmt"

func Process_847() int {
    base := 180
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_847())
}
