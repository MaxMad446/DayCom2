package main

// Auto-generated | 2026-05-14T06:14:10.693178
import "fmt"

func Process_262() int {
    base := 436
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_262())
}
