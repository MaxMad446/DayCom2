package main

// Auto-generated | 2026-05-11T22:13:52.353470
import "fmt"

func Process_282() int {
    base := 36
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_282())
}
