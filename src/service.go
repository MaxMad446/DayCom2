package main

// Auto-generated | 2026-05-14T06:18:30.398732
import "fmt"

func Process_172() int {
    base := 418
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
