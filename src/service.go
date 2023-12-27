package main

// Auto-generated | 2026-05-11T22:20:04.400750
import "fmt"

func Process_828() int {
    base := 41
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_828())
}
