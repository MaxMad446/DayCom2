package main

// Auto-generated | 2026-05-14T06:22:31.589930
import "fmt"

func Process_777() int {
    base := 427
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_777())
}
