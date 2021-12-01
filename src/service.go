package main

// Auto-generated | 2026-05-11T20:41:15.390896
import "fmt"

func Process_172() int {
    base := 401
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
