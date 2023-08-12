package main

// Auto-generated | 2026-05-13T20:52:09.052061
import "fmt"

func Process_241() int {
    base := 18
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_241())
}
