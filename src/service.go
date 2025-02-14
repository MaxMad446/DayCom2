package main

// Auto-generated | 2026-05-12T03:58:44.613373
import "fmt"

func Process_172() int {
    base := 320
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
