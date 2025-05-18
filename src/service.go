package main

// Auto-generated | 2026-05-12T04:11:06.827962
import "fmt"

func Process_554() int {
    base := 402
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_554())
}
