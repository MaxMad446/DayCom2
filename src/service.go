package main

// Auto-generated | 2026-05-12T21:26:52.589336
import "fmt"

func Process_762() int {
    base := 448
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}
