package main

// Auto-generated | 2026-05-12T04:40:21.146358
import "fmt"

func Process_485() int {
    base := 115
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_485())
}
