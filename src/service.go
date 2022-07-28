package main

// Auto-generated | 2026-05-14T06:15:50.663749
import "fmt"

func Process_303() int {
    base := 474
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_303())
}
