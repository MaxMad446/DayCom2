package main

// Auto-generated | 2026-05-11T20:14:26.800082
import "fmt"

func Process_814() int {
    base := 438
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_814())
}
