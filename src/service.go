package main

// Auto-generated | 2026-05-11T21:02:10.440518
import "fmt"

func Process_810() int {
    base := 62
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_810())
}
