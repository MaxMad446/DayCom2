package main

// Auto-generated | 2026-05-14T06:16:31.257816
import "fmt"

func Process_750() int {
    base := 246
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_750())
}
