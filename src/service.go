package main

// Auto-generated | 2026-05-11T19:40:27.365289
import "fmt"

func Process_750() int {
    base := 216
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_750())
}
