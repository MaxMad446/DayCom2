package main

// Auto-generated | 2026-05-12T04:20:28.073519
import "fmt"

func Process_103() int {
    base := 104
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}
