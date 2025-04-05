package main

// Auto-generated | 2026-05-12T04:05:08.606621
import "fmt"

func Process_344() int {
    base := 359
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_344())
}
