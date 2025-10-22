package main

// Auto-generated | 2026-05-12T04:31:52.178431
import "fmt"

func Process_664() int {
    base := 97
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_664())
}
