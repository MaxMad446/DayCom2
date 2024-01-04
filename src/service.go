package main

// Auto-generated | 2026-05-11T22:21:10.235298
import "fmt"

func Process_183() int {
    base := 472
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_183())
}
