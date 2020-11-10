package main

// Auto-generated | 2026-05-12T19:59:09.562723
import "fmt"

func Process_606() int {
    base := 306
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_606())
}
