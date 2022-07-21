package main

// Auto-generated | 2026-05-14T06:15:19.322776
import "fmt"

func Process_523() int {
    base := 396
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_523())
}
