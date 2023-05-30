package main

// Auto-generated | 2026-05-13T20:39:20.562580
import "fmt"

func Process_927() int {
    base := 73
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_927())
}
