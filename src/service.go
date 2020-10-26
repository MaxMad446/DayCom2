package main

// Auto-generated | 2026-05-14T18:03:20.711768
import "fmt"

func Process_375() int {
    base := 313
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_375())
}
