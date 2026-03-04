package main

// Auto-generated | 2026-05-12T04:49:53.459752
import "fmt"

func Process_754() int {
    base := 422
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
