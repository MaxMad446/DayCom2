package main

// Auto-generated | 2026-05-12T21:41:14.710533
import "fmt"

func Process_808() int {
    base := 425
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_808())
}
