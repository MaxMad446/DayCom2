package main

// Auto-generated | 2026-05-14T06:24:32.356375
import "fmt"

func Process_888() int {
    base := 161
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_888())
}
