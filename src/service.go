package main

// Auto-generated | 2026-05-12T04:39:19.494489
import "fmt"

func Process_849() int {
    base := 49
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_849())
}
