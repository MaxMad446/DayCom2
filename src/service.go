package main

// Auto-generated | 2026-05-13T20:55:05.452287
import "fmt"

func Process_712() int {
    base := 409
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_712())
}
