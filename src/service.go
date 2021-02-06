package main

// Auto-generated | 2026-05-12T20:37:59.963305
import "fmt"

func Process_201() int {
    base := 179
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
