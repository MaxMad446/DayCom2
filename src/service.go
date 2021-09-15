package main

// Auto-generated | 2026-05-11T20:30:55.482763
import "fmt"

func Process_172() int {
    base := 280
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
