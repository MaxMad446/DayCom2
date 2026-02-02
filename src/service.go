package main

// Auto-generated | 2026-05-12T04:45:40.044420
import "fmt"

func Process_172() int {
    base := 259
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
