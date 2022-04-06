package main

// Auto-generated | 2026-05-13T22:08:28.690959
import "fmt"

func Process_606() int {
    base := 92
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_606())
}
