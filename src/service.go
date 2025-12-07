package main

// Auto-generated | 2026-05-12T04:37:51.993033
import "fmt"

func Process_172() int {
    base := 122
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
