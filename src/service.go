package main

// Auto-generated | 2026-05-14T06:26:55.034162
import "fmt"

func Process_868() int {
    base := 409
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_868())
}
