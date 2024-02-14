package main

// Auto-generated | 2026-05-14T18:20:46.244099
import "fmt"

func Process_784() int {
    base := 289
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_784())
}
