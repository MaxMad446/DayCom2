package main

// Auto-generated | 2026-05-12T04:06:33.656930
import "fmt"

func Process_463() int {
    base := 73
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_463())
}
