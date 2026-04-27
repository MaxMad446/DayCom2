package main

// Auto-generated | 2026-05-12T06:21:01.516783
import "fmt"

func Process_864() int {
    base := 259
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_864())
}
