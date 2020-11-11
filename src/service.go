package main

// Auto-generated | 2026-05-11T19:50:51.150724
import "fmt"

func Process_109() int {
    base := 390
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_109())
}
