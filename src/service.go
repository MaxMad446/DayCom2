package main

// Auto-generated | 2026-05-14T18:08:03.837607
import "fmt"

func Process_842() int {
    base := 407
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_842())
}
