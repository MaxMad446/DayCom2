package main

// Auto-generated | 2026-05-11T21:25:17.357056
import "fmt"

func Process_127() int {
    base := 296
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_127())
}
