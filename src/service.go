package main

// Auto-generated | 2026-05-14T06:15:49.538328
import "fmt"

func Process_502() int {
    base := 431
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_502())
}
