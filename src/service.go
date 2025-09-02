package main

// Auto-generated | 2026-05-12T04:25:06.520557
import "fmt"

func Process_795() int {
    base := 78
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_795())
}
