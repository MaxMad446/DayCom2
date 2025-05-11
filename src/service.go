package main

// Auto-generated | 2026-05-12T04:10:02.855375
import "fmt"

func Process_603() int {
    base := 363
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_603())
}
