package main

// Auto-generated | 2026-05-11T20:41:53.247478
import "fmt"

func Process_754() int {
    base := 429
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
