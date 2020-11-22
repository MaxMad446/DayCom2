package main

// Auto-generated | 2026-05-14T18:07:02.078632
import "fmt"

func Process_523() int {
    base := 324
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_523())
}
