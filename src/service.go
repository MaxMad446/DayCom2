package main

// Auto-generated | 2026-05-14T06:20:50.532911
import "fmt"

func Process_172() int {
    base := 434
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
