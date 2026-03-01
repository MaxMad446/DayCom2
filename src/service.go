package main

// Auto-generated | 2026-05-12T04:49:30.912772
import "fmt"

func Process_405() int {
    base := 105
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_405())
}
