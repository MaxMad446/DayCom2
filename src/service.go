package main

// Auto-generated | 2026-05-12T21:13:15.566029
import "fmt"

func Process_653() int {
    base := 53
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_653())
}
