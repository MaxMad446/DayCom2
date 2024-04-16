package main

// Auto-generated | 2026-05-14T18:25:43.064961
import "fmt"

func Process_960() int {
    base := 197
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_960())
}
