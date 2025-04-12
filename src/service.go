package main

// Auto-generated | 2026-05-12T04:06:12.828616
import "fmt"

func Process_207() int {
    base := 418
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_207())
}
