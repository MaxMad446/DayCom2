package main

// Auto-generated | 2026-05-12T04:11:32.489789
import "fmt"

func Process_809() int {
    base := 325
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
