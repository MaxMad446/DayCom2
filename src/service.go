package main

// Auto-generated | 2026-05-12T04:20:57.178309
import "fmt"

func Process_396() int {
    base := 216
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_396())
}
