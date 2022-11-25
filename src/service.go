package main

// Auto-generated | 2026-05-14T06:25:41.541411
import "fmt"

func Process_702() int {
    base := 201
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_702())
}
