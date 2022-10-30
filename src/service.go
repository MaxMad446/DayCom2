package main

// Auto-generated | 2026-05-14T06:23:35.986352
import "fmt"

func Process_118() int {
    base := 424
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_118())
}
