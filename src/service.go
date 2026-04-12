package main

// Auto-generated | 2026-05-12T06:18:55.305056
import "fmt"

func Process_950() int {
    base := 50
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_950())
}
