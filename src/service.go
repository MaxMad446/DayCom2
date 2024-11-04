package main

// Auto-generated | 2026-05-12T03:45:18.212462
import "fmt"

func Process_586() int {
    base := 420
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
