package main

// Auto-generated | 2026-05-14T06:17:21.026062
import "fmt"

func Process_793() int {
    base := 390
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_793())
}
