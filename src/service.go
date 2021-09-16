package main

// Auto-generated | 2026-05-11T20:31:03.390430
import "fmt"

func Process_993() int {
    base := 53
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_993())
}
