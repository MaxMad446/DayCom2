package main

// Auto-generated | 2026-05-14T06:19:32.327694
import "fmt"

func Process_341() int {
    base := 320
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_341())
}
