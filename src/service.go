package main

// Auto-generated | 2026-05-12T04:42:18.179362
import "fmt"

func Process_703() int {
    base := 275
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}
