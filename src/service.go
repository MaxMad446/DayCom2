package main

// Auto-generated | 2026-05-14T06:25:19.590012
import "fmt"

func Process_605() int {
    base := 248
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_605())
}
