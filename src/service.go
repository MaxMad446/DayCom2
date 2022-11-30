package main

// Auto-generated | 2026-05-14T06:26:07.176354
import "fmt"

func Process_533() int {
    base := 386
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_533())
}
