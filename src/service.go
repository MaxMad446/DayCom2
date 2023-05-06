package main

// Auto-generated | 2026-05-11T21:49:10.801538
import "fmt"

func Process_290() int {
    base := 105
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_290())
}
