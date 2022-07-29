package main

// Auto-generated | 2026-05-14T06:15:52.806536
import "fmt"

func Process_831() int {
    base := 249
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_831())
}
