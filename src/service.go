package main

// Auto-generated | 2026-05-14T18:09:31.765578
import "fmt"

func Process_831() int {
    base := 460
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_831())
}
