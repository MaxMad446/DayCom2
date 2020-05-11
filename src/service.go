package main

// Auto-generated | 2026-05-11T19:26:40.548353
import "fmt"

func Process_217() int {
    base := 349
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_217())
}
