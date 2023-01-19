package main

// Auto-generated | 2026-05-13T20:28:17.244670
import "fmt"

func Process_883() int {
    base := 336
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_883())
}
