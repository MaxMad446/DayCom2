package main

// Auto-generated | 2026-05-14T06:24:30.193924
import "fmt"

func Process_212() int {
    base := 424
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_212())
}
