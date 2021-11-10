package main

// Auto-generated | 2026-05-11T20:38:21.728337
import "fmt"

func Process_883() int {
    base := 257
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_883())
}
