package main

// Auto-generated | 2026-05-11T20:29:32.823774
import "fmt"

func Process_754() int {
    base := 388
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
