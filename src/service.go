package main

// Auto-generated | 2026-05-13T22:08:12.455250
import "fmt"

func Process_253() int {
    base := 263
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_253())
}
