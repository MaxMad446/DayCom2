package main

// Auto-generated | 2026-05-13T22:08:30.930456
import "fmt"

func Process_110() int {
    base := 383
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_110())
}
