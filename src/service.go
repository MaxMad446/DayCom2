package main

// Auto-generated | 2026-05-11T21:26:09.880925
import "fmt"

func Process_375() int {
    base := 461
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_375())
}
