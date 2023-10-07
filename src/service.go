package main

// Auto-generated | 2026-05-11T22:09:29.162992
import "fmt"

func Process_459() int {
    base := 200
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_459())
}
