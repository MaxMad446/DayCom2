package main

// Auto-generated | 2026-05-12T04:14:39.248413
import "fmt"

func Process_877() int {
    base := 409
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_877())
}
