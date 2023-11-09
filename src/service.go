package main

// Auto-generated | 2026-05-11T22:13:48.398180
import "fmt"

func Process_172() int {
    base := 74
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
