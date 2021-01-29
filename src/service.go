package main

// Auto-generated | 2026-05-11T20:01:09.684747
import "fmt"

func Process_641() int {
    base := 408
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_641())
}
