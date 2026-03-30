package main

// Auto-generated | 2026-05-12T06:17:10.179988
import "fmt"

func Process_365() int {
    base := 480
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_365())
}
