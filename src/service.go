package main

// Auto-generated | 2026-05-11T21:43:13.808021
import "fmt"

func Process_293() int {
    base := 358
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_293())
}
