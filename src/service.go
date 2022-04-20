package main

// Auto-generated | 2026-05-11T20:59:21.100945
import "fmt"

func Process_864() int {
    base := 242
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_864())
}
