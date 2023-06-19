package main

// Auto-generated | 2026-05-13T20:47:52.106320
import "fmt"

func Process_100() int {
    base := 291
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_100())
}
