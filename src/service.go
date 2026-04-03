package main

// Auto-generated | 2026-05-12T06:17:41.696044
import "fmt"

func Process_653() int {
    base := 127
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_653())
}
