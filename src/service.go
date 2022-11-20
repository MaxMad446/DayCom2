package main

// Auto-generated | 2026-05-14T06:25:15.782574
import "fmt"

func Process_252() int {
    base := 469
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_252())
}
